#include<iostream>
using namespace std;
struct employee{
    private:
    int id;
    string name;
    char qua[100];
    float experience;
    char contact_num[10];

    public:
    void getdata()
    {
        cout<<"Enter ID:";
        cin>>id;
        cout<<"Enter name:";
        cin>>name;
        cout<<"Enter qualification:";
        cin>>qua;
        cout<<"Enter experience:";
        cin>>experience;
        cout<<"Enter contact number:";
        cin>>contact_num;
    }

    int showdata(int find_id)
    {
        if(id==find_id)
        {
         cout<<"Employee name:"<<name<<endl;
         cout<<"Qualification:"<<qua<<endl;
         cout<<"Experience:"<<experience<<endl;
         cout<<"Contact Number:"<<contact_num<<endl;
         return 1;
        }
        else
        {
            return 0;
        }
    }
}a[1000];
int main()
{
   int emp,i,find_id,c;
   char ch;
   cout<<"Enter the number of employee:";
   cin>>emp;
   for(i=0;i<emp;i++)
   {
    a[i].getdata();
   } 

  do
  {
   cout<<"Enter id that to be search:";
   cin>>find_id;
   for(i=0;i<emp;i++)
   {
    c = a[i].showdata(find_id);
     if(c==1)
   {
    break;
   }
   }
   if(i==emp)
   {
    cout<<"Error";
   }
   cin>>ch;
  
  } while (ch=='Y' || ch=='y');

}
