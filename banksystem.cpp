#include <iostream>
using namespace std;

class Bank
{
    long int accno;
    string name;
    float bal;
    public:
    static int count;
        void Create(Bank b[],int &n)
        {
            cout<<"Enter name: ";
            cin>>b[n].name;
            cout<<"Enter initial balance: ";
            cin>>b[n].bal;
            if(n==0)
                b[n].accno=10001;
            else
                b[n].accno=b[n-1].accno+1;
            n++;
            cout<<"Your Account number is: "<<b[n-1].accno<<"\n";
        }

        void Deposit(Bank b[], int n)
        {
            count++;
            long int a;
            float d;
            cout<<"Enter accno: ";
            cin>>a;
            for(int i=0;i<n;i++)
            {
                if(b[i].accno==a)
                {
                    cout<<"Enter amount to be deposited: ";
                    cin>>d;
                    b[i].bal = b[i].bal+d;
                    cout<<"Remaining Balance: "<<b[i].bal<<"\n";

                    return;
                }
            }
            cout<<"Account number NOT FOUND !!"<<"\n";
        }

        void Withdraw(Bank b[], int n)
        {
            count++;
            long int a;
            float d;
            cout<<"Enter accno: ";
            cin>>a;
            for(int i=0;i<n;i++)
            {
                if(b[i].accno==a)
                {
                    cout<<"Enter amount to be withdrawn: ";
                    cin>>d;
                    if(d<b[i].bal)
                    {
                        b[i].bal = b[i].bal-d;
                        cout<<"Remaining Balance: "<<b[i].bal<<"\n";
                    }
                    else
                        cout<<"Insufficient Balance !"<<"\n";

                    return;
                }
            }
            cout<<"Account number NOT FOUND !!"<<"\n";
        }

        void Balance(Bank b[], int n)
        {
            long int a;
            float d;
            cout<<"Enter accno: ";
            cin>>a;
            for(int i=0;i<n;i++)
            {
                if(b[i].accno==a)
                {
                    d = b[i].bal;
                    cout<<"Remaining Balance: "<<d<<"\n";
                    return;
                }
            }
            cout<<"Account number NOT FOUND !!"<<"\n";
        }

        void Del(Bank b[], int &n)
        {
            long int a;
            float d;
            cout<<"Enter accno: ";
            cin>>a;
            for(int i=0;i<n;i++)
            {
                if(b[i].accno==a)
                {
                    for(int j=i;j<n-1;j++)
                    {
                        b[j]=b[j+1];
                    }
                    cout<<"Account deleted!!"<<"\n";
                    n--;
                    return;
                }
            }
            cout<<"Account number NOT FOUND !!"<<"\n";
        }
};

int Bank::count=0;
int main()
{
    Bank b;
    Bank ba[10];
    int n=0;
    int opt;
    cout<<"1. Create Account"<<'\n'<<"2. Deposit"<<'\n'<<"3. Withdraw"<<'\n';
    cout<<"4. Check Balance"<<'\n'<<"5. Delete Account"<<'\n';
    cin>>opt;
    do
    {
        switch(opt)
        {
            case 1:
                b.Create(ba,n);
                break;
            case 2:
                b.Deposit(ba,n);
                break;
            case 3:
                b.Withdraw(ba,n);
                break;
            case 4:
                b.Balance(ba,n);
                break;
            case 5:
                b.Del(ba,n);
                break;

            default:
                cout<<"Exitting...";
                break;
        }

        cout<<"Number of transactions performed by the User:"<<Bank::count<<"\n\n";
        cout<<"1. Create Account"<<'\n'<<"2. Deposit"<<'\n'<<"3.Withdraw"<<'\n';
        cout<<"4. Check Balance"<<'\n'<<"5. Delete Account"<<'\n';
        cin>>opt;
    }while(opt>0 && opt<6);
    return 0;
}

