// 5) Write a program to initialize array of objects in C++, 
// in constructors assign the data variables Name, Reg_no, Total_marks 
// and print them after sorting with respect to name.

#include <iostream>
#include <string>

using namespace std;

class Student
{
	public:
		string name;
		int marks;
		long long roll;
	public:
		Student(){
			cout << "Enter name: " << endl;
			cin>>name;
			cout << "Enter Reg no: " << endl;
			cin>>roll;
			cout << "Enter Total marks: " << endl;
			cin>>marks;		
		}
			
		void displayInfo()
		{
			cout << "Name : " << name << endl;
			cout << "Roll No : " << roll << endl;
			cout << "Total Marks : " << marks << endl;
		}
		
};

int main()
{
	int n;
	cout<<"Enter the total no of students: ";
	cin>>n;
	Student st[n];
	
	
	bool b = true; 
	while (b) { 
	    b = false; 
	    for (size_t i=0; i<n-1; i++) { 
		    // swapping the variable 
		    // for sorting order 
	        if (st[i].name > st[i + 1].name) { 
		        Student temp = st[i]; 
		        st[i] = st[i + 1]; 
		        st[i + 1] = temp; 
		        b = true; 
		        } 
		    } 
	} 
	
	cout<<"Displaying student details in sorted order:"<<endl;
	
	for(int i=0; i<n; i++)
	{
		cout <<endl<< "Student " << i + 1 << endl;
		st[i].displayInfo();
	}
	
	
	return 0;
}
