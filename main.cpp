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
     l=0;
     while(l<t[k])
     {
         int x=rand()%8+1;
         int y=rand()%8+1;
        if(table_2[x][y]==" " && table_2[x+1][y+1]==" " && table_2[x-1][y-1]==" ")
        {
            table_2[x][y]="X";
            l++;
        }
     }
 }
      for(int i = 0; i < 10; i++) {
       for(int j = 0; j < 10; j++){
           cout<< table_2[i][j]<<" ";
    }
    cout<<endl;
}
cout<<endl;

}


