#include <iostream> 
#include <queue> 
using namespace std; 
void DispQueue(queue <int> queue1) 
{ 
 queue <int> q1 = queue1; 
 while (!q1.empty()) 
 { 
 cout << '\t' << q1.front(); 
 q1.pop(); 
 } 
 cout << '\n'; 
} 
int main() { 
 queue<int> que1; 
 int n,x; 
 cout<<"Enter number of elements to be pushed in the Queue: "; 
 cin>>n; 
 for(int i=0;i<n;i++) 
 { 
 cout<<"Enter the element "<<i<<": "; 
 cin>>x; 
 que1.push(x); 
 } 
  
 cout<<"Before popping elements \n"; 
 cout << "\nSize of Queue is " << que1.size()<<endl; 
 cout<<"Elements of the queue1 are:\n";
 DispQueue(que1); 
 
 que1.pop(); 
 que1.pop(); 
 que1.pop(); 
 
 cout<<"\nAfter popping 3 elements\n"; 
 DispQueue(que1); 
 cout << "\nSize of Stack is " << que1.size()<<endl; 
 cout<<"Elements of the queue1 are:\n";
 DispQueue(que1); 
 
 int N; 
 queue<int> que2;  
 cout<<"Enter number of elements to be pushed in the 2nd Queue "; 
 cin>>N; 
  
 for(int i=0;i<N;i++) 
 { 
	cout<<"Enter the element"<<i<<": "; 
	cin>>x; 
	que2.push(x); 
 } 
 
 que1.swap(que2); 
 cout << "\tSwapping the elements of 1st and 2nd Queue\n"; 
 cout<<"1st Queue is \n"; 
 DispQueue(que1); 
 cout<<"2nd Queue is \n"; 
 DispQueue(que2); 
}



