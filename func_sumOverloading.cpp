//5. Create a function sum and perform function overloading for different parameter types.

#include<iostream>
using namespace std;
 
    class Sum{
    	
    	public:
    		int num1,num2;
    		
    	
    		
    	int findSum(int a, int b){
		int sum=0;
		sum=a+b;
		cout<<"The sum of 2 int numbers are :";
		return sum;
		}
		
		float findSum(float a,float b){
			float sum=0.0f;
			sum=a+b;		
			cout<<"The sum of 2 float numbers are :";
			return sum;
		}
	};

	
	
int main(){
	
	Sum obj1;
	Sum obj2;
	
	cout<<obj1.findSum(11.8f,12.1f)<<endl;
	
	cout<<obj1.findSum(11,1)<<endl;
		
	return 0;
}
