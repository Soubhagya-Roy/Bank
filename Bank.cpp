#include<iostream>
#include<ctime>
using namespace std;
class bank
{
    char depo_name[100];
    int acc_no;
    char acc_type[10];
    int balance = 500;
    int depo;
    int n;
    int withdraw;
    public:
    void get()
    {
        time_t  t = time(NULL);
        tm * tPtr = localtime(&t);
        cout<<"Date:"<<tPtr->tm_mday<<"/"<<tPtr->tm_mon+1<<"/"<<tPtr->tm_year+1900<<endl;
        cout<<"Time:"<<tPtr->tm_hour<<"/"<<tPtr->tm_min<<"/"<<tPtr->tm_sec<<endl;

        cout<<"==========================================================================="<<endl;

        cout<<"Enter the name of Bank Account Holder:-"<<endl;
        cin>>depo_name;
        cout<<"Enter your account number="<<endl;
        cin>>acc_no;
        cout<<"Press 1 for Deposite and 0 for withdraw ="<<endl;
        cin>>n;

        if (n>=1)
        {
            cout<<"Enter amount to be deposited="<<endl;
            cin>>depo;

        }
       if (n<=0)
       {
        cout<<"Enter amount to be withdrawn="<<endl;
            cin>>withdraw;
            if (withdraw > 500)
            {
                cout<< "Not sufficient balance in the account"<<endl;
                cout<< "The current balance is :-"<< balance<<endl;
                
            
            }
        
            
            
       }
        
        
    }
    void display()
    {   cout<<"Name of Bank Account Holder ="<<depo_name<<endl;
        cout<<"\nAccount Number="<<acc_no<<endl;
        cout<<"Initial balance="<<balance<<endl;
        if (n <= 0 && withdraw <= balance )
        {
            cout<<"Amount with withdrawn="<<withdraw<<endl;
            cout<<"Current Account Balance after withdraw="<<balance - withdraw<<endl;
        }
        
        if (n >= 1)
        {
           cout<<"Amount deposited="<<depo<<endl;
           cout<<"Total Amount in the account after the deposit="<<balance + depo<<endl;
        }
        

    }
       
        
};

int main()
{
    bank b1;

b1.get();
b1.display();
return 0;
}