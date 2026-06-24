#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main() {
int l=0, b;
string a;
srand(time(NULL));
string table[10][10]=
{
{" ","A","B","C","D","E","F","G","H","I",},
{"1"," "," "," "," "," "," "," "," "," ",},
{"2"," "," "," "," "," "," "," "," "," ",},
{"3"," "," "," "," "," "," "," "," "," ",},
{"4"," "," "," "," "," "," "," "," "," ",},
{"5"," "," "," "," "," "," "," "," "," ",},
{"6"," "," "," "," "," "," "," "," "," ",},
{"7"," "," "," "," "," "," "," "," "," ",},
{"8"," "," "," "," "," "," "," "," "," ",},
{"9"," "," "," "," "," "," "," "," "," ",}};
 string table_2[10][10]=
{{" ","A","B","C","D","E","F","G","H","I",},
 {"1"," "," "," "," "," "," "," "," "," ",},
 {"2"," "," "," "," "," "," "," "," "," ",},
 {"3"," "," "," "," "," "," "," "," "," ",},
 {"4"," "," "," "," "," "," "," "," "," ",},
 {"5"," "," "," "," "," "," "," "," "," ",},
 {"6"," "," "," "," "," "," "," "," "," ",},
 {"7"," "," "," "," "," "," "," "," "," ",},
 {"8"," "," "," "," "," "," "," "," "," ",},
 {"9"," "," "," "," "," "," "," "," "," ",}};
  string table_3[10][10]=
{{" ","A","B","C","D","E","F","G","H","I",},
 {"1"," "," "," "," "," "," "," "," "," ",},
 {"2"," "," "," "," "," "," "," "," "," ",},
 {"3"," "," "," "," "," "," "," "," "," ",},
 {"4"," "," "," "," "," "," "," "," "," ",},
 {"5"," "," "," "," "," "," "," "," "," ",},
 {"6"," "," "," "," "," "," "," "," "," ",},
 {"7"," "," "," "," "," "," "," "," "," ",},
 {"8"," "," "," "," "," "," "," "," "," ",},
 {"9"," "," "," "," "," "," "," "," "," ",}};
 cout<< "Autor:Maria Tomczyk\nPamietaj aby umieszczajac statki na planszy podac duza litere, a nasteopnie cyfre np. A 5\n";
   for(int i = 0; i < 10; i++) {
       for(int j = 0; j < 10; j++) {
           cout<< table[i][j]<<" ";
       }
       for(int j = 0; j < 10; j++) {
           cout<< table_2[i][j]<<" ";
       }
       cout<<endl;
    }cout<<endl;
cout<<endl;
cout<<"Podaj rozmieszczenie swoich statkow na planszy, litere i cyfre:"<<endl;
cout<<"1-czteromasztowiec"<<endl;
cout<<"2-trzymasztowce"<<endl;
cout<<"3-dwomasztowce"<<endl;
cout<<"4-jednomasztowce"<<endl;
for(int k=0; k<20; k++)
{
    cin>> a >> b;
 for(int i=0; i<10; i++)
 {
     if(table[0][i]==a)
     {
         table[b][i]="X";
     }
}
  for(int i = 0; i < 10; i++) {
       for(int j = 0; j < 10; j++){
           cout<< table[i][j]<<" ";
    }
    cout<<endl;
}
cout<<endl;
 }
 int t[10]={4, 3, 3, 2, 2, 2, 1, 1, 1, 1};
 for(int k=0; k<10; k++)
  {
    bool ustawiono=false;

  while (!ustawiono) {
    int x = rand() % 9+1;
    int y = rand() % 9+1;
    bool z = rand() % 2 == 0;

  bool stawianie=true;

  for (int r = x - 1; r <= (z ? x + 1 : x + t[k]); ++r) {
        for (int c = y - 1; c <= (z ? y + t[k] : y + 1); ++c) {

            if (r >= x && r < (z ? x + 1 : x + t[k]) &&
                c >= y && c < (z ? y + t[k] : y + 1)) {
            if (r < 1 || r >=10 || c < 1 || c >= 10) {
            stawianie = false;
                        }
            }
    if (r >= 1 && r < 10 && c >= 1 && c < 10) {
    if (table_2[r][c] == "X") {
        stawianie = false;
        }
    }
   }
 }
 if (stawianie) {
                for (int j = 0; j < t[k]; ++j) {
                    if (z) {
                        table_2[x][y + j] = "X";
                    } else {
                        table_2[x + j][y] = "X";
                    }
                }
                ustawiono = true;
            }
        }
    }
system("CLS");
cout<<"Umiesciles wszystkie statki. Oto twoja plansza\n";
    for(int i = 0; i < 10; i++) {
       for(int j = 0; j < 10; j++) {
           cout<< table[i][j]<<" ";
       }cout<<endl;
}cout<<endl;
int s_1=0, s_2=0;
int k =rand()%2;
bool komputer=(k==1);
bool gracz=(k==0);

while(s_2<20 && s_1<20)
    {
    while(gracz && s_2<20)
    {
    cout<< "Twoja kolej.Podaj gdzie chcesz strzelic:";
    cin>> a >> b;
    int ind=-1;
     for(int i=0; i<10; i++)
   {
     if(table_2[0][i]==a)
     {
         ind=i;
         break;
     }
   }
   if(ind==-1)
   {
     cout<< "Strzelales juz w to miejsce.Podaj inne pole\n";
     continue;
   }
         if(table_2[b][ind]=="X")
         {
             cout<<"Trafiony\n";
             table_2[b][ind]="O";
             table_3[b][ind]="O";
                for(int i = 0; i < 10; i++) {
       for(int j = 0; j < 10; j++) {
           cout<< table[i][j]<<" ";
       }
       for(int j = 0; j < 10; j++) {
           cout<< table_3[i][j]<<" ";
       }
       cout<<endl;
    }cout<<endl;
    cout<<endl;
             s_2++;
         }
         else if(table_2[b][ind]=="O")
         {
          cout<< "Strzelales juz w to miejsce.Podaj inne pole.\n";
         }
        else
        {
            cout<<"Pudlo\n";
            table_3[b][ind]="~";
            gracz=false;
            komputer=true;
             for(int i = 0; i < 10; i++) {
       for(int j = 0; j < 10; j++) {
           cout<< table[i][j]<<" ";
       }
       for(int j = 0; j < 10; j++) {
           cout<< table_3[i][j]<<" ";
       }
       cout<<endl;
    }cout<<endl;
    cout<<endl;
        }
    }
     while(komputer && s_1<20)
    {
    cout<< "Kolejka komputera\n";
    int x = rand() % 9+1;
    int y = rand() % 9+1;
    cout<< table[0][y] << " " << x <<"\n";
    if(table[x][y]=="X")
    {
        cout<< "Trafiony\n";
        table[x][y]="O";
        s_1++;
    }
    else if(table[x][y]=="O")
    {
         cout<< "Komputer podaje inne pole\n";
         continue;
    }
            else
    {
        cout<<"Pudlo\n";
         komputer=false;
         gracz=true;
    }
    }
}
if(s_1==20)
{
    cout<< "Komputer wygral."<<endl;
}
else if(s_2==20)
{
    cout<< "Brawo wygrales!"<<endl;
}
}

