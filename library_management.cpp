// 1) Create a library management system and overload stream insertion 
//operator ”<<” and extraction operator “>>” to get and print details about book.
// Calculate the overdue fine using friend function.

#include <iostream>
using namespace std;

class Library
{
private:
	int exceeded_days;
	string book_name,author_name,stu_name,due_date;
	friend int calc_due(Library);
public:
	Library(int days = 0)
	{  exceeded_days = days; }
	friend ostream & operator << (ostream &out, const Library & b);
	friend istream & operator >> (istream &in, Library & b);
};

int calc_due(Library b) {
	
	int due_amount=0;
    due_amount = b.exceeded_days*1;
    return due_amount;
}

ostream & operator << (ostream &out, const Library &b)
{
	out <<"Name of student: "<<b.stu_name<<endl;
	out <<"Book Name: " << b.book_name << endl;
	out <<"Author Name: " <<b.author_name << endl;
	out <<"Due Date: " <<b.due_date << endl;
	out <<"Due Exceeded Days: " <<b.exceeded_days << endl;
	return out;
}

istream & operator >> (istream &in, Library &b)
{
	cout << "\nEnter your name: ";
	in >> b.stu_name;
	cout << "Enter book name: ";
	in >> b.book_name;
	cout << "Enter author name: ";
	in >> b.author_name;
	cout << "Enter Due date: ";
	in >> b.due_date;
	cout << "Enter days after due: ";
	in >> b.exceeded_days;
	return in;
}

int main()
{
int n;
cout<<"Enter the number of students: "<<endl;
cin>>n;
Library b[n];
int i;
for(i=0;i<n;i++){
	cin >> b[i];
	cout << "\nDetails of the book: \n"<<endl;
	cout << b[i];
	cout<< "The Due amount to be paid is :"<< calc_due(b[i])<<endl;
}
return 0;
}

