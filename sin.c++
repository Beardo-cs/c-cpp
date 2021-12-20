#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include <windows.h>
#include <time.h>

using namespace std;
int main()
{
    double x;
    cin>> x;
    cout<< "CALCULATING sin(x) for x = " << x<< endl;
    double s=0;
    double t=x;
    for(int k=1; k<=10; k++)
    {     
        s=s+t;
        t=-t * x*x / (2*k)/(2*k+1);
        cout<< "NO OF TERMS :" << k << "value :" << s << "ERROR ESTIMATE: "<< t << endl;
    }
    
    
}