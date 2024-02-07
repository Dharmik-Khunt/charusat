#include<iostream>
#include<string.h>

#include<iomanip>
using namespace std;
int main()
{
    int sem,i,th[3],prt[3],gp,sum=0;
    string sub[3];
    string a[3];
    char name[50];
    string b[3];
    int id;
    float sgpa;
    
    cout<<"enter the id:";
    cin>>id;
    cout<<"Enter the student name:";
    cin>>name;
    cout<<"Enter the semester between 1 to 8:";
    cin>>sem;

    for(i=0; i<3; i++)
    {
        cout<<"Enter the subject "<<i+1<<":";
        cin>>sub[i];
    }

    for(i=0; i<3; i++)
    {
        cout<<"enter the theory marks of subject "<<i+1<<":";
        cin>>th[i];
    }

    for(i=0; i<3; i++)
    {
         if(th[i]<45)
        {
            a[i]="FF";
            gp=0;
        }
        else if(th[i]<50)
        {
            a[i]="DD";
            gp=4;
        }
        else if(th[i]<55)
        {
            a[i]="CD";
            gp=5;
        }
        else if(th[i]<60)
        {
            a[i]="CC";
            gp=6;
        }
        else if(th[i]<66)
        {
            a[i]="BC";
            gp=7;
        }
        else if(th[i]<73)
        {
            a[i]="BB";
            gp=8;

        }
        else if(th[i]<80)
        {
            a[i]="AB";
            gp=9;

        }
        else if(th[i]>=80)
        {
            a[i]="AA";
            gp=10;
        }

    }

    for(i=0; i<3; i++)
    {
        
        cout<<"enter the practical marks of subject "<<i+1<<":";
        cin>>prt[i];
        
    }

    for(i=0; i<3; i++)
    {
        if(prt[i]<45)
        {
            b[i]="FF";
            gp=0;
        }
        else if(prt[i]<50)
        {
            b[i]="DD";
            gp=4;
        }
        else if(prt[i]<55)
        {
            b[i]="CD";
            gp=5;
        }
        else if(prt[i]<60)
        {
            b[i]="CC";
            gp=6;
        }
        else if(prt[i]<66)
        {
            b[i]="BC";
            gp=7;
        }
        else if(prt[i]<73)
        {
            b[i]="BB";      
            gp=8;
        }
        else if(prt[i]<80)
        {
            b[i]="AB";
            gp=9;
        }
        else if(prt[i]>=80)
        {
            b[i]="AA";
            gp=10;
        }
        sum=sum+(gp*3);
    }

    cout<<"Student ID     :23CE"<<id<<endl;
    cout<<"Student name   :"<<name<<endl;
    cout<<"semester       :"<<sem<<endl;
    cout<<"                 theory      practical"<<endl;

    for(i=0; i<3; i++)
    {
        cout<<left<<setw(15)<<sub[i]<<right<<setw(7)<<a[i]<<setw(10)<<b[i]<<endl;
       
    }

   sgpa=sum/9;
   cout<<"sgpa  "<<sgpa;
  return 0;
}
