#include<iostream>
#include<iomanip>
using namespace std;
class car
{
    public:
    string model;
    string fuel_type;
    float price;
    int mileage;
    string transmission;
    int tank_capacity;
    string airbags;
    
    void getdata()
    {
        fflush(stdin);
        cout<<"Enter the Model of Car : ";
        getline(cin,model);
        cout<<"Fuel Type (Diesel/Petrol) : ";
        cin>>fuel_type;
        cout<<"Price of Car : ";
        cin>>price;
        cout<<"Mileage of Car : ";
        cin>>mileage;
        cout<<"Transmission Type (Manual/Automatic) : ";
        cin>>transmission;
        cout<<"Tank Capacity : ";
        cin>>tank_capacity;
        cout<<"Does the Car have AirBags? (y/n): ";
        cin>>airbags;
    }
    int displaydata(){
        cout<<"Model : "<<model<<endl;
        cout<<"Fuel Type : "<<fuel_type<<endl;
        cout<<"Price : Rs."<<price<<"lakh/-"<<endl;
        cout<<"Mileage : "<<mileage<<" Km"<<endl;
        cout<<"Transmission : "<<transmission<<endl;
        cout<<"Tank Capacity : "<<tank_capacity<<" Ltr"<<endl;
        cout<<"Air Bags Available : "<<airbags<<endl;
        return 1;
    }
    
};
int main()
{
    car A[7];
    int n,i,n1,p,c;
    cout<<"How many cars do you want to enter details for? ";
    cin>>n;
    if(n < 7 || n >0 )
    {
    for(int i=0;i<n;i++)
    {
        A[i].getdata();
    }
    }
    else
    {
        cout<<"enter valid number";
    }
    string choice;
    string choice1;
    cout<<"get the cars of your preference:"<<endl;
    cout<<"1. Model Name    2. Fuel Type   3. Price Range"<<endl;
    cout<<"enter your choice"<<endl;
    cin>>n1;
    if(n1==1)
    {
        cout<<"list of the cars:"<<endl;;
        for(i=0; i<n; i++)
        {
            
            cout<<A[i].model<<endl;
        }
    cout<<"choose the car name:";
    cin>>choice;

    for(int i=0;i<n;i++)
        {
        if(A[i].model == choice)
        {
           c= A[i].displaydata();
           if(c==1)
           {
                continue;
           }
            
        }
         }
    }
    else if(n1==2)
    {
        cout<<"tata motors are available with fuel options"<<endl;
        for(i=0; i<n; i++)
        {
            cout<<A[i].fuel_type<<endl;
        }
        cout<<"choose the fuel name:";
    cin>>choice;

    for(int i=0;i<n;i++)
    {
        if(A[i].fuel_type == choice)
        {
            A[i].displaydata();
            if(c==1)
            {
                continue;
            }
        
        }
    }
    }
    else if(n1==3)
    {
        
        cout<<"Enter the maximum affordale range in lakh :";
        cin>>p;
        for(i=0; i<n; i++)
        {
            if(A[i].price<=p)
            {
                A[i].displaydata();
            }
            
        }

    }

}
