//2) Create two forward list with 5 elements each and transfer elements from 
//one forward list to other.


#include<iostream>
#include<forward_list>
using namespace std;

int main()
{
	forward_list<int> flist1 = {10, 20, 30, 40, 50};
	
	forward_list<int> flist2 = {60, 70, 80, 90, 100};
	
	flist1.splice_after(flist1.begin(),flist2);
	
	cout << "The forward list after splice_after operation : ";
	for (int&c : flist1)
	cout << c << " ";
	cout << endl;

	return 0;
}


