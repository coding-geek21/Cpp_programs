//4) Write a program to calculate the area of a rectangle and display it.

#include <iostream>
using namespace std;

class RecArea{
	
	public:
		double l,b;		
    
    double calculateArea() {
        return l*b;
    }
	void printDetails(){
		cout<<"length :"<<l<<endl;
		cout<<"breadth :"<<b<<endl;
    }
	
	
};

int main(){
	
    RecArea rec1;
    
    rec1.l=20.5;
    rec1.b=34.89;
    
    RecArea rec2;
    
    rec2.l=9.0;
    rec2.b=10.5;
    
    rec1.printDetails();
    cout << "Area of Rectangle 1 : " << rec1.calculateArea() << endl << endl;
    rec2.printDetails();
    cout << "Area of Rectangle 2 : " << rec2.calculateArea() << endl << endl;
		
	return 0;
}
