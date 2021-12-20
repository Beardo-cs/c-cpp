#include <iostream>
using namespace std;
int main()
{
 int year,days,month,date;
cout<<"Enter year:=";
 cin>>year;
 cout<<"Enter days:=";
 cin>>days;
            
  if(year<=9999 && year>=1100)
   {
    if((year%400==0)||((year%100!=0)&&(year%4==0)))
     {
      cout<<year<<" :: is a leap year with 366 days\n";
      if(days<=31)
      {
           month = 1;
             date = days%31;
        cout<<date<<"/"<<month<<"/"<<year;
       }
       else if(days<=60)
       {
        month= days/31;
        month=2;
        date= days%31;
        cout<<date<<"/"<<month<<"/"<<year;
        }
       else if(days<=91)
       {
        month= days/60;
        month=3;
        date= days%60;
        cout<<date<<"/"<<month<<"/"<<year;
        }
       else if(days<=121)
       {
            month= days/91;
        month=4;
        date= days%91;
        cout<<date<<"/"<<month<<"/"<<year;
       }
       else if(days<=152)
       {
            month= days/121;
        month=5;
        date= days%121;
            
            cout<<date<<"/"<<month<<"/"<<year;
        }
        else if(days<=182)
        {
            month= days/152;
        month=6;
        date= days%152;
        cout<<date<<"/"<<month<<"/"<<year; 
        }
        else if(days<=213)
        {
            month= days/182;
        month=7;
        date= days%182;
        cout<<date<<"/"<<month<<"/"<<year;
        }
        else if(days<=244)
        {
             month= days/213;
        month=8;
        date= days%213;
        cout<<date<<"/"<<month<<"/"<<year;
        }
        else if(days<=274)
        {
            month= days/244;
        month=9;
        date= days%244;
        cout<<date<<"/"<<month<<"/"<<year;
        }     
        else if(days<=305)
        {
            month= days/274;
        month=10;
        date= days%274;
        cout<<date<<"/"<<month<<"/"<<year;
        }
        else if(days<=335)
        {
             month= days/305;
        month=11;
        date= days%305;
        cout<<date<<"/"<<month<<"/"<<year; 
        }
        else if(days<=366)
        {
            month= days/335;
        month=12;
        date= days%335;
        cout<<date<<"/"<<month<<"/"<<year;
        }
      else
       {
                cout<<"Invalid days...please enter form 1 to 365";
       }
      }
   else
      {
          cout<<year<<"::with 365 days\n";
      if(days<=31)
      {
           month = 1;
             date = days%31;
        cout<<date<<"/"<<month<<"/"<<year;
       }
       else if(days<=59)
       {
         month= days/31;
        month=2;
        date= days%31;
        cout<<date<<"/"<<month<<"/"<<year;
        }
       else if(days<=90)
       {
            month= days/59;
        month=3;
        date= days%59;
        cout<<date<<"/"<<month<<"/"<<year;
        }
       else if(days<=120)
       {
            month= days/90;
        month=4;
        date= days%90;
        cout<<date<<"/"<<month<<"/"<<year;
       }
       else if(days<=151)
       {
            month= days/120;
        month=5;
        date= days%120;
            
            cout<<date<<"/"<<month<<"/"<<year;
        }
        else if(days<=181)
        {
            month= days/151;
        month=6;
        date= days%151;
        cout<<date<<"/"<<month<<"/"<<year; 
        }
        else if(days<=212)
        {
            month= days/181;
        month=7;
        date= days%181;
        cout<<date<<"/"<<month<<"/"<<year;
        }
        else if(days<=243)
        {
             month= days/212;
        month=8;
        date= days%212;
        cout<<date<<"/"<<month<<"/"<<year;
        }
        else if(days<=273)
        {
            month= days/243;
        month=9;
        date= days%243;
        cout<<date<<"/"<<month<<"/"<<year;
        }     
        else if(days<=304)
        {
            month= days/273;
        month=10;
        date= days%273;
        cout<<date<<"/"<<month<<"/"<<year;
        }
        else if(days<=334)
        {
             month= days/304;
        month=11;
        date= days%304;
        cout<<date<<"/"<<month<<"/"<<year; 
        }
        else if(days<=365)
        {
            month= days/334;
        month=12;
        date= days%334;
        cout<<date<<"/"<<month<<"/"<<year;
        }
    else
    {
        cout<<"Invalid days...please enter form 1 to 365";
    }
}
}

    else 
    {
        cout<<"Invalid year...please enter year between 1100 to 9999 ";
    }
}