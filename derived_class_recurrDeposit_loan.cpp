//4) Derive two classes recurring deposit, loan from bank account and 
//calculate interest accordingly.

#include<iostream>
using namespace std;
 
class cash
{
    public:
      float amt;
     cash()
     {
        cout<<"enter amount: "<<endl;
        cin>>amt;
        
     }
};
  
class RD : public cash
{
    public:
    RD()
    {
        
        cout<<"interest:"<<amt*0.53<<endl;
    }
};

class loan : public cash
{
    public:
    loan()
    {
        cout<<"interest:"<<amt*0.92<<endl;
    }
};
 
int main()
   {
      
        cout<<"loan:"<<endl;
        loan l1;
        cout<<"deposit:"<<endl;
        RD r1;
        return 0;
   }
