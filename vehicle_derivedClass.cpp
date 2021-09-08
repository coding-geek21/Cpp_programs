// 1) Create a class vehicle and derive classes car, bus, boat.
// Override the method message() which contains the message about the vehicle types
// and override another method fare() to compute the money paid for transport.

#include<iostream>
using namespace std;

class Vehicle{
	public:
		double d;
		double amount;	
	void input(){
		cout<<"Enter the Distance in Km: ";
		cin>>d;	
	}
	void message(){
		cout<<"This is base Class : vehicle"<<endl;
	}
	
	void fare(){
		amount=0;
		cout<<"Money paid for Transport will be computed here "<<endl<<endl;
	}
	
	
};

class Car:public Vehicle{
	public:

	void message(){
	    cout<<"Vehicle Name : Car"<<endl;
	}
	
	void fare(){
		amount= d * 100;
		cout<<"Amount to be paid for Car travelling distance: "<<d<<" is :"<<amount<<endl<<endl;
		
	}
	
};

class Bus:public Vehicle{
	public:

	void message(){
	    cout<<"Vehicle Name : Bus"<<endl;
	}
	
	void fare(){
		amount= d * 20;
		cout<<"Amount to be paid for Bus travelling distance: "<<d<<" is :"<<amount<<endl<<endl;
		
	}
};

class Boat: public Vehicle{
	public:
	void message(){
	    cout<<"Vehicle Name : Boat"<<endl;
	}
	
	void fare(){
		amount= d * 500;
		cout<<"Amount to be paid for Boat travelling distance: "<<d<<" is :"<<amount<<endl<<endl;
		
	}
};

int main(){

			
	Vehicle t1;
	Car c1;
	Bus b1;
	Boat a1;
	
	t1.input();
	t1.message();
	t1.fare();
	
	
	a1.input();
	a1.message();
	a1.fare();
	
	
	c1.input();
	c1.message();
	c1.fare();
	
	
	b1.input();
	b1.message();
	b1.fare();
	
	
	return 0;
}

