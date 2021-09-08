#include<iostream>
#include<string.h>
using namespace std;

class Passenger
{
 double estimate_Uber,estimate_OLA;
 public:
 char name[100],from_add[100],to_add[100],type[10],day[2];
 long int phno,time,dist;
 virtual double auto_estimate() = 0;
 virtual double cab_estimate()=0;
 void getDetails()
 {
  cout<<"Enter your name ";
  cin>>name;
  cout<<"Enter your phone number ";
  cin>>phno;
  cout<<"Enter your location ";
  cin>>from_add;
  cout<<"Enter your destination ";
  cin>>to_add;
  cout<<"Enter distance in km ";
  cin>>dist;
  cout<<"Enter cab or auto ";
  cin>>type;
  cout<<"Enter time ";
  cin>>time>>day;
 }

};
class Uber:public Passenger
{
 double estimate_Uber;
 public:


 double auto_estimate()
 {
    if((time>=9&&time<10&&strcmpi(day,"am")==0) ||(time>=6&&time<8&&strcmpi(day,"pm")==0))
    {
     double cost = dist*8*2;
     return cost;
    }
    return dist*8;
 }

 double cab_estimate()
 {
    if((time>=9&&time<10&&strcmpi(day,"am")==0) ||(time>=6&&time<8&&strcmpi(day,"pm")==0))
    {
     double cost = dist*12*2;
     return cost;
    }
    return dist*12;
 }
 void Uber_cost()
 {
 if(strcmpi(type,"auto") ==0)
  {
   estimate_Uber =auto_estimate();
   cout<<"\nUber Estimate Rs."<<estimate_Uber;
  }
  if(strcmpi(type,"cab")==0)
  {
   estimate_Uber = cab_estimate();
   cout<<"\nUber Estimate Rs."<<estimate_Uber;
  }

 }

 double retCost()
 {
  return estimate_Uber;
 }

};


class OLA:public Passenger
{
 double estimate_Ola;
 public:


 double auto_estimate()
 {
    if((time>=8&&time<9&&strcmpi(day,"am")==0) ||(time>=8&&time<10&&strcmpi(day,"pm")==0))
    {
     double cost = dist*8*2;
     return cost;
    }
    return dist*8;
 }

  double cab_estimate()
 {
    if((time>=8&&time<9&&strcmpi(day,"am")==0) ||(time>=8&&time<10&&strcmpi(day,"pm")==0))
    {
     double cost = dist*12*2;
     return cost;
    }
    return dist*12;
 }

 OLA(Uber u1)
 {
  strcpy(name,u1.name);
  phno=u1.phno;
  strcpy(from_add,u1.from_add);
  strcpy(to_add,u1.to_add);
  dist = u1.dist;
  strcpy(type,u1.type);
  time = u1.time    ;
  strcpy(day,u1.day);


 if(strcmpi(type,"auto") ==0)
  {
   estimate_Ola =auto_estimate();
   cout<<"\nOLA estimate Rs."<<estimate_Ola;
  }
   if(strcmpi(type,"cab")==0)
  {
   estimate_Ola = cab_estimate();
   cout<<"\nOLA Estimate Rs."<<estimate_Ola;
  }


 }
 double retCost()
 {
  return estimate_Ola;
 }

};
void compare(OLA o,Uber u)
{
 double ola,uber;
 ola =o.retCost();
 uber = u.retCost();
 if(ola>uber)
  cout<<"\nIt is better to travel by Uber ";
 else if (uber>ola)
   cout<<"\nIt is better to travel by OLA ";
 else if (uber == ola)
   cout<<"\nThe cost of travelling by Uber and OLA are same";
}


int main()
{
 Uber u1;
 u1.getDetails();
 u1.Uber_cost();
 OLA o1(u1);
 compare(o1,u1) ;
 return 0; 
 
}

