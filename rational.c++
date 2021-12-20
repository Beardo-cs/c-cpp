#include<iostream>
#include<cmath>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include <windows.h>
using namespace std;
int main()
{
int x;
int y;
int z;
cout<< "ENTER NUMBER TO CHECK :-";
cin>>x;
cout<< "ENTER 2nd NUMBER TO CHECK :-";
cin>>y;
z=x/y;
cout<<z<<endl;
if(z%1==0)
{
cout<<"THE number IS RATIONAL AND INTEGER";
}
else
cout<<"THE x IS irRATIONAL AND INTEGER";
}


