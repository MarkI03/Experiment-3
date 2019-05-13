#include<iostream>
#include<conio.h>
#include<iomanip>
#include<string.h>
using namespace std;
int main ()

{
char a[10],i,j,values;
int numbers;
cout<<"Program Sorting                                         Igaya 1-13\n___________________________________________________________________\n"<<endl;
cout <<"What is the size of the array? ";
cin>>numbers;
cout<<"\nInput the elements: ";
for(i=0;i<numbers;i++)
{
cin>>a[i];
}
for(i=0;i<numbers;i++)
{
for(j=i+1;i<numbers;i++)
{
for(j=i+1;j<numbers;j++)
{
if(a[i]>a[j])
{
values=a[i];
a[i]=a[j];
a[j]=values;

}
}
}

}
cout<<"\n\n      The size is: "<<numbers;
cout<<"\n      Elements Sorted Output: {";
for(i=0;i<numbers;i++)
{
cout<<a[i]<<",";
}
cout<<"}\n";

getch();
return 0;
}

