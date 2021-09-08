//5) Write a program to swap two stacks.


#include <stack>
#include <iostream>
using namespace std;

int main()
{
    int n,num,i;
	stack<int> mystack1;
	stack<int> mystack2;
	
	cout<<"Enter the number of elements: "<<endl;
	cin>>n;
	
	
	cout<<"Enter the elements of Stack 1: ";
	for(i=0;i<n;i++){
	    cin>>num;
	    mystack1.push(num);
	}

	
	cout<<"Enter the elements of Stack 2: ";
	for(i=0;i<n;i++){
	    cin>>num;
	    mystack2.push(num);
	}


	mystack1.swap(mystack2);

	cout<<"mystack1 = ";
	while (!mystack1.empty()) {
		cout<<mystack1.top()<<" ";
		mystack1.pop();
	}

	cout<<endl<<"mystack2 = ";
	while (!mystack2.empty()) {
		cout<<mystack2.top()<<" ";
		mystack2.pop();
	}
	return 0;
}

