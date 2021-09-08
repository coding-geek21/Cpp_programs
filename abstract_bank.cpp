#include<iostream>
#include<process.h>
using namespace std;
class Bank
{
 public:
 virtual void getBalance() =0;
 virtual void withdrawl(double draw) =0;
};
class BankA : public Bank
{
 public:
 double amount;
 BankA()
 {
  amount = 10000;
 }
 void withdrawl(double draw)
 {

  if(draw>amount)
  {
   cout<<"Your bank balance is less than the amount you want to withdraw\n";
  }
  else
  {
   amount = amount-draw;
  }
 }
 void getBalance()
 {
  cout<<"The amount left in your account in BankA is Rs."<<amount<<endl;
 }

};

class BankB : public Bank
{
 public:
 double amount;
 BankB()
 {
  amount = 15000;
 }
 void withdrawl(double draw)
 {

  if(draw>amount)
  {
   cout<<"Your bank balance is less than the amount you want to withdraw\n";
  }
  else
  {
   amount = amount-draw;
  }
 }
 void getBalance()
 {
  cout<<"The amount left in your account in BankB is Rs."<<amount<<endl;
 }

};


class BankC : public Bank
{
 public:
 double amount;
 BankC()
 {
  amount = 20000;
 }
 void withdrawl(double draw)
 {

  if(draw>amount)
  {
   cout<<"Your bank balance is less than the amount you want to withdraw\n";
  }
  else
  {
   amount = amount-draw;
  }
 }
 void getBalance()
 {
  cout<<"The amount left in your account in BankC is Rs."<<amount<<endl;
 }

};


int main()
{
 BankA ba;
 BankB bb;
 BankC bc;
 int ch;
 do
 {
  cout<<"\n\t\tMENU\n1.Withdraw from BankA\n2.Withdraw from BankB\n3.Withdraw from BankC\n4.Exit\n\nEnter your choice ";
  cin>>ch;
  if(ch ==4)
  {
   cout<<"Press any key to exit...";
   exit(0);
  }
  else
  {
    double draw;
    cout<<"Enter amount to be withdrawn ";
    cin>>draw;
    if(ch ==1)
    {
      ba.withdrawl(draw);
      ba.getBalance();
    }
    else if(ch ==2)
    {
      bb.withdrawl(draw);
      bb.getBalance();
    }
    else if(ch ==3)
    {
      bc.withdrawl(draw);
      bc.getBalance();
    }
  }
 } while(ch<=4);
 return 0;

}

