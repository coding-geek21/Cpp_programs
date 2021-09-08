//calculator using classes and objects

#include <iostream>
#include<string.h>
#include<math.h>
using namespace std;

class Calc{
	public:
		int num1 , num2;
		char op; 
		
	double calculate(){
		switch(op){
			case '+':
				return num1+num2;
				break;
			case '-':
				return num1-num2;
				break;
			case '*':
				return num1*num2;
				break;
			case '/':
				return num1/num2;
				break;
			case '%':
				return num1%num2;
				break;
			case '^':
				return pow(num1,num2);
				break;
			default:
				cout<<"Enter a valid string";
			}
	}
};


int main(){
	Calc myObj;
	
		
	cin>>myObj.num1;
	cin>>myObj.num2;
	cin>>myObj.op;

	cout<<"Num1 : "<<myObj.num1<<endl;
	cout<<"Num2 : "<<myObj.num2<<endl;
    cout<<"Operator : "<<myObj.op<<endl;
	cout<<"Result : "<<myObj.calculate()<<endl;
	
	
	return 0;
}
