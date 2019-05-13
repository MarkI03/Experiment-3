#include <iostream>
#include<conio.h>
#include<iomanip>
#include<math.h>
using namespace std;

int main()
{
int i;
float a[10], sum,average,largest,smallest,Sum=0;
cout<<"Program Integer (Largest, Smallest, Sum, and Average)                          Igaya 1-13\n--------------------------------------------------------------------------------------------\n";
for(i = 0; i < 10; ++i)
{
cout << "Input the values: ";
cin >> a[i];
Sum += a[i];
}
sum= Sum;
average = Sum / 10;	
for(i = 1;i < 10; ++i)
{
if(a[0] > a[i])(a[0]=a[i]);
smallest=a[0];
}
for(i = 1;i < 10; ++i)
{
if(a[0] < a[i]) (a[0] = a[i]);
largest = a[0];
}{	
cout<<"\n\nProgram Computation\n___________________\n";


cout<<"\nThe Smallest Integer is: "<<smallest;
cout<<"\nThe Largest Integer is: "<<largest;

cout<<"\nThe Sum of the Given Integers is: "<<sum;

cout<<"\nThe Average of the Given Integers is "<<average;
}

getch();
return 0;
}


