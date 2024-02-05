#include<iostream>
using namespace std;
int main()
{
    int a,b,choice;
    char op;
    
    cout<<"Enter A:";
    cin>>a;
    cout<<"Enter B:";
    cin>>b;
    cout<<"1.Addition\n2.Substraction\n3.Multi\n4.Div"<<endl;
    cin>>choice;

    switch(choice)
    {
        case 1:
        cout<<"Ans="<<a+b;
        break;

        case 2:
        cout<<"Ans="<<a-b;
        break;

        case 3:
        cout<<"Ans="<<a*b;
        break;

        case 4:
        cout<<"Ans="<<a/b;
        break;

        default:
        cout<<"Error";
    }
}