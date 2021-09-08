// 6) Write a program to generate the armstrong numbers between two intervals, initialize the intervals using parameterized constructor.

#include <iostream>
#include<math.h>
#include<string.h>
using namespace std;

class Amstrong{
	private:
		int start,end;

	public:
		Amstrong(int a,int b){
		int i;		
		for(i = a; i <= b; i++)
		{
		int sum = 0;
		int temp_num = i;
		for(; temp_num >0; temp_num /= 10)
		{
		int r = temp_num % 10;
		sum = sum + (r * r * r);
		}
		if(sum == i)
		cout << i << endl;
		}
		
	}
	
	
};

int main(){
	
    Amstrong a1(50,500);
	return 0;
}

