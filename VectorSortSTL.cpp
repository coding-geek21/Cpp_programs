//1) Initialize a vector with the elements 5, 9, -1, 200, and 0. 
//Print it. Sort and print it again.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    vector<int> v={5,9,-1,200,0};
   	cout<<"Elements before sorting"<<endl;
   	for (const auto &i: v)
	   cout << i << ' '<<endl;
	   cout<<"Elements after sorting"<<endl;
	   sort(v.begin(), v.end());
   	for (const auto &i: v)
	   cout << i << ' '<<endl;
   	return 0;
}
