//4) In a queue add elements milk, sugar, coffee, tea, water.
// Write a loop that searches for the item, "coffee" and replace it with "tea." 
//Print the queue

#include <iostream>
#include <queue>
#include<string.h>

using namespace std;


void showq(queue<string> q1)
{
	queue<string> q = q1;
	while (!q.empty()) {
		cout << '\t' << q.front();
		q.pop();
	}
	cout << '\n';
}

void findq(queue<string> q1)
{
	queue<string> q = q1;
	while (!q.empty()) {
		if(q.front()=="coffee"){
		     q.front()="tea";
		}
		cout << '\t' << q.front();
		q.pop();
	}
	cout << '\n';
}



int main()
{
	queue<string>que;
	que.push("milk");
	que.push("sugar");
	que.push("coffee");
	que.push("tea");
	que.push("water");

	cout << "The elements in the queue are : ";
	showq(que);

	cout << "\nqueue size: " << que.size();
	cout << "\nqueue front: " << que.front();
	cout << "\nqueue back: " << que.back();
	cout<<endl;
	cout<<"\n Elements after finding and replacing the element 'coffee' by 'tea'\n";
	findq(que);

	return 0;
}


