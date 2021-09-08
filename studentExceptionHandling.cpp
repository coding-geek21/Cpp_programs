//Write a C++ program to save roll number, name and subjects of a student.
// While reading data raise exception if the roll number is not 10-digit length
// and the marks of the student are not within the range 0 and 100.
// Write function to print the result of the student.

#include<iostream>
using namespace std;

class Student{
	public:
		long long rollno;
		string name;
		string subject1,subject2,subject3;
		double marks1,marks2,marks3;	
		
	Student(){
		cout<<"\nEnter your rollno: "<<endl;
		cin>>rollno;
		try {
	            if (rollno <= 999999999)
	                throw "\nYour RollNO is less than 10 digits! ";
	        }
	 
	    catch (const char* exp) {
	            cout << exp << endl;
	            cout<<"Enter a valid rollNo: "<<endl;
	            cin>>rollno;
	    }
		cout<<"Enter your name: "<<endl;
		cin>>name;
		cout<<"Enter subject name: "<<endl;
		cin>>subject1;
		cout<<"Enter the marks: "<<endl;
		cin>>marks1;
		try {
	            if (marks1<0 or marks1>100)
	                throw "\nPlease enter a mark between range 0 to 100";
	        }
	 
	    catch (const char* exp) {
	            cout << exp << endl;
	            cout<<"Enter a valid mark: "<<endl;
	            cin>>marks1;
	    }
		cout<<"Enter subject name: "<<endl;
		cin>>subject2;
		cout<<"Enter the marks: "<<endl;
		cin>>marks2;
		try {
	            if (marks2<0 or marks2>100)
	                throw "\nPlease enter a mark between range 0 to 100";
	        }
	 
	    catch (const char* exp) {
	            cout << exp << endl;
	            cout<<"Enter a valid mark: "<<endl;
	            cin>>marks2;
	    }
		cout<<"Enter subject name: "<<endl;
		cin>>subject3;
		cout<<"Enter the marks: "<<endl;
		cin>>marks3;
		try {
	            if (marks3<0 or marks3>100)
	                throw "\nPlease enter a mark between range 0 to 100";
	        }
	 
	    catch (const char* exp) {
	            cout << exp << endl;
	            cout<<"Enter a valid mark: "<<endl;
	            cin>>marks3;
	    }
		cout<<endl;	
		cout<<endl;
		
	}
	
	void printDetails(){
		cout<<"\nRollno: "<<rollno<<endl<<"Name :"<<name<<endl;
		cout<<"\n-----Subjects and marks-----"<<endl;
		printSubDetails();
	}
	void printSubDetails(){
		cout<<"\nSubject Name: "<<subject1<<endl<<"Marks :"<<marks1<<endl;
		cout<<"Subject Name: "<<subject2<<endl<<"Marks :"<<marks2<<endl;
		cout<<"Subject Name: "<<subject3<<endl<<"Marks :"<<marks3<<endl;
	}
};



int main(){
	
	int i,n;
	
	cout<<"Enter the number of students: "<<endl;
	cin >>n;
	
	Student stu[n];
	
	
	
	cout<<"\n--------------------Student Details-------------------------"<<endl;
			
	for(i=0;i<n;i++){
		cout<<"\nStudent :"<<i+1<<endl;
		stu[i].printDetails();
	}
	
	return 0;
}
