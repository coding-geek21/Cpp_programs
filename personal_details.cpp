// 3)  Write programs using default and parameterized constructor to print your name, 
//date of birth and mobile number.

#include<iostream>
#include<string.h>
using namespace std;

class Person{
	
	
	string name;
	string dob;
	long long mob_no;
	
	
	public:
		Person(){
            cout<<endl<<"Printing details using Default constructor"<<endl;
			name="Jayapritha";
			dob="21-11-2001";
			mob_no=9777384836;
		}
		
       Person(string s1,string s2, long long num1){
            cout<<endl<<"Printing details using parameterized constructor"<<endl;
            name=s1;
            dob=s2;
            mob_no=num1;        
       }
    
		void printDetails(){
			cout<<"Name : "<<name<<endl;
			cout<<"Date-of-birth : "<<dob<<endl;
			cout<<"mobile_no : "<<mob_no<<endl; 
		}
	
	
};


int main(){
	
	Person person1;
	
	person1.printDetails();
	
    Person person2("Harshitha","23-09-2002",8245086780);
    
    person2.printDetails();
    
	
	return 0;
}


