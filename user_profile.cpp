#include<iostream>
using namespace std;
class User
{
 public:
 char name[100];
 int age;
 long int phno;
 virtual void  printDetails() =0;
 User()
 {
  cout<<"Enter name ";
  cin>>name;
  cout<<"Enter your age ";
  cin>>age;
  cout<<"Enytr your phone number ";
  cin>>phno;
 }

}                       ;
class Banking :public User
{
  public:
  long int accno;
  double amount;
  Banking()
  {
   cout<<"Enter your account number ";
   cin>>accno;
   cout<<"Enter amount in your account ";
   cin>>amount ;
  }
  void printDetails()
  {
   cout<<"\n\t\tUSER DETAILS\nName is "<<name<<"\nAge is "<<age<<" years\nPhone number is "<<phno<<"Account number is "<<accno<<"\nAmount in account is Rs."<<amount<<endl;
  }
};

int main()
{
 Banking b;
 b. printDetails();
 return 0;
}


