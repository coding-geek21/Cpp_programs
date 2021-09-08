//2)  Create a class Bank and derived classes IB, IOB, SBI and override method interest 
// to compute interest for fixed deposit and use object pointer for overriding 
//(with and without virtual functions)

#include<iostream>
using namespace std;

class Bank{
	public:
		int n;
		double p;	
	virtual void interest(){
		cout<<"-----Displaying the Interest for FD in SBI,IB and IOB-----"<<endl;
		cout<<"Rate of Interest for different Banks \n IB-7.5 \n IOB- 6.2 \n SBI-8.0 \n";
	}
	void message(){
		cout<<"Enter Your Principal: ";
		cin>>p;
		cout<<"Enter no of yrs: ";
		cin>>n;
	}		
};

class IB:public Bank{
	public:
		double r=7.5;
		double i;
	void interest(){
		i=(p*r*n)/100;
		cout<<"Your Interest amount in IB bank: "<<i<<endl;
	}
	void message(){
		cout<<"This is IB"<<endl;
	}	
	
};

class IOB:public Bank{
	public:
		double r=6.2;
		double i;
	void interest(){
		i=(p*r*n)/100;
		cout<<"Your Interest amount in IOB bank: "<<i<<endl;
	}
	void message(){
		cout<<"This is IOB"<<endl;
	}	
};

class SBI: public Bank{
	public:
		double r=8;
		double i;
	void interest(){
		i=(p*r*n)/100;
		cout<<"Your Interest amount in SBI bank: "<<i<<endl;
	}
	void message(){
		cout<<"This is SBI"<<endl;
	}	
};

int main(){
	
	
	Bank* b;
    IOB b1;
    IB b2;
    SBI b3;
    b = &b1;     
    
    // Non-virtual function, binded at compile time
    b->message();
    // virtual function, binded at runtime
 	b->interest(); 
        
    b=&b2;
   	b->message();
    b->interest(); 
        
    b=&b3;
   	b->message();
    b->interest();

	return 0;
}
