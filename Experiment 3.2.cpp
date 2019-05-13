#include <iostream>
#include<conio.h>
#include<iomanip>

using namespace std;
int main()
{
const int prov=3,day=7;
int temp[prov][day];
cout<<"Week temperatures of Province A, B, C                                         Igaya 1-13 \n________________________________________________________________________________________\n\n";
cout<<"\nInput recorded temperature of a week of Province A, B, and C \n\n  Province and Day    Degrees \n  ----------------    -------";
for(int i= 0; i<prov; ++i)
{
for(int j=0; j <day; ++j)
{
cout<<"\n  Province " << i + 1 << ", Day " << j + 1 << " : ";
cin>>temp[i][j];
}}
cout<<"\n\n       Week Temperature:\n       -----------------\n";
for (int i = 0; i < prov; ++i)
{
for(int j = 0; j < day; ++j)
{
cout<<"          Province "<<i+1<<", Day "<<j+1<<" : "<<temp[i][j]<<"  Degrees"<<endl;
}}
getch();
return 0;
}
