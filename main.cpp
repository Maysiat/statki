#include <iostream>
#include <random>
using namespace std;
int main() {
string a;
int b;
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
}
    for(int i = 0; i < 10; i++) {
       for(int j = 0; j < 10; j++) {
           cout<< table[i][j]<<" ";
    }
    cout<<endl;
}
cout<<endl;
std::random_device rd;
std::mt19937 gen(rd());

int min = 0;
int max = 1;
std::uniform_int_distribution<> dis(min, max);
int x=dis(gen);
if(x==0)
int y=1;
else if(x==1)
int y=0;
cout<<y<<" "<<x<<endl;
if(x==1)
{
int min=1;
int max=9;
std::uniform_int_distribution<> dis(min, max);
int a=dis(gen);
for(int i=a; i<a+3; i++)
{
    table_2[a][i]="X";
}
}
else if(y==1)
{
int min=1;
int max=9;
std::uniform_int_distribution<> dis(min, max);
int b=dis(gen);
for(int i=b; i<b+3; i++)
{
    table_2[i][b]="X";
}
}
for(int k=0; k<2; k++)
{
if(x==1)
{
int min=1;
int max=9;
std::uniform_int_distribution<> dis(min, max);
int a=dis(gen);
for(int i=a; i<a+2; i++)
{
    table_2[a][i]="X";
}
}
else if(y==1)
{
int min=1;
int max=9;
std::uniform_int_distribution<> dis(min, max);
int b=dis(gen);
for(int i=b; i<b+2; i++)
{
    table_2[i][b]="X";
}
}
}
for(int k=0; k<3; k++)
{
if(x==1)
{
int min=1;
int max=9;
std::uniform_int_distribution<> dis(min, max);
int a=dis(gen);

for(int i=a; i<a+1; i++)
{
    table_2[a][i]="X";
}
else if(y==1)
{
int min=1;
int max=9;
std::uniform_int_distribution<> dis(min, max);
int b=dis(gen);
for(int i=b; i<b+1; i++)
{
    table_2[i][b]="X";
}
}
}
}
for(int k=0; k<4; k++)
{
if(x==1)
{
int min=1;
int max=9;
std::uniform_int_distribution<> dis(min, max);
int a=dis(gen);
    table_2[a][i]="X";
}
else if(y==1)
{
int min=1;
int max=9;
std::uniform_int_distribution<> dis(min, max);
int b=dis(gen);
    table_2[i][b]="X";
}
}

}


