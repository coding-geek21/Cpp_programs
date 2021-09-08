//Write a program to compute tax for N employees with respect to their salary, 
//use constructor overloading and this pointer to initialize and assign salary
// and empid.


#include<iostream>
using namespace std;

class Employees{
	
	public:
		double salary,tax;
		int empid;	
	
	public:
		Employees(){
			empid=1;
			salary=1000;			
		}
		
		Employees(double salary,int empid){
			this->salary=salary;
			this->empid=empid;			
		}
			
		void computeTax(){
			
			this->tax = 5 * this->salary/100;    
			cout<<"\nComputed tax for the salary "<<salary<<" is :"<<tax<<endl;
					
		}
		
		void PrintDetails(){
			cout<<"\nEmployee Details :"<<endl;
			cout<<"empid :"<<empid<<endl;
			cout<<"salary :"<<salary<<endl;
		}	
	
};


int main(){
	
	int n,empid,i;	
	double salary;
	
	cout<<"Enter the value of N :";
	cin>>n;	
	Employees emp[n];
	
	
	for(i=1;i<n;i++){
		emp[i] = Employees(10000+(i*1000),i+1);              
    }
    
    for (i=0;i<n;i++)
	{
	  emp[i].computeTax();
	  emp[i].PrintDetails();
	}

	
	return 0;
}


