// 4. Create a class named 'Print' to print values using different 
// datatypes by creating different methods with the same name 'printn'.

#include <iostream> 
using namespace std; 
class Print 
{
public: 
 void printn(int a){ 
 cout<<"Roll Number:"<<a<<endl; 
 } 
 void printn(double a) 
 {  cout<<"percentage:"<<a<<endl; 
 } 
 void printn(char a) 
 { 
 cout<<"Grade:"<<a<<endl; 
 } 
 void printn(string a) 
 { 
 cout<<"Name:"<<a<<endl; 
 } 
};
int main() 
{Print p; 
int roll; 
string name; 
double percentage; 
char grade; 
cout<<"Enter your roll Number:"; 
cin>>roll; cout<<"enter name:"; 
cin>>name; 
cout<<"enter percentage:"; 
cin>>percentage; 
cout<<"enter grade:"; 
cin>>grade; 
cout<<"Printing the details of a student using Function Overloading"<<endl; 
p.printn(roll); 
p.printn(name); 
p.printn(percentage); 
p.printn(grade); 
return 0; 
} 
	
	
