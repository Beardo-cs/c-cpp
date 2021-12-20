#include <iostream>  
#include <conio.h>
using namespace std;  
int main()
{  
int n, m=0, rem;    
cout<<"Enter a number: ";    
cin>>n;    
  while(n!=0)    
  {    
     rem=n%10;
     m=m*10+rem;    
     n/=10;
  }    
 cout<<"Reversed Number: "<<m<<endl;     
  return 0;
}