//Write a program to find the area of circle, rectangle, hexagon and trapezium 
//using function overloading

#include<iostream>
using namespace std;

class Area{
	
	public:
	
	void FindArea(double r){
		cout<<"Area of circle :"<<3.14*r*r<<endl;
	}
	
	void FindArea(int l,int b){
		cout<<"Area of Rectangle :"<<l*b<<endl;
	}
	
	void FindArea(double p,double q,double h){
		cout<<"Area of Trapezium :"<<(0.5)*(p+q)*h<<endl;
	}
	
	void FindArea(int s){
		cout<<"Area of Hexagon :"<<1.732*(3/2)*s*s<<endl;
	}
};




int main(){
	
	int ch;
	char choice;
	double r;
	int l,b,s;
	float p,q,h;
	Area obj;
	do
    {
        cout<<"Implement Function Overloading"<<endl;
        cout<<"1. area of circle"<<endl;
        cout<<"2. area of rectangle"<<endl;
        cout<<"3. area of hexagon"<<endl;
        cout<<"4. area of Trapezium"<<endl;
        cout<<"\nEnter your choice :";
        cin>>ch;
        switch(ch)
        {
            case 1:
                cout<<"Enter the value of radius of the circle :";
                cin>>r;
                obj.FindArea(r);
                break;
            case 2:
                cout<<"Enter the sides of rectangle :";
                cin>>l>>b;
                obj.FindArea(l,b);
                break;                
            case 3:
                cout<<"Enter the side of Hexagon :";
                cin>>s;
                obj.FindArea(s);
                break;                
            case 4:
                cout<<"Enter the parallel sides of the Trapezium :";
                cin>>p>>q;
                cout<<"Enter the height of the Trapezium :";
                cin>>h;
                obj.FindArea(p,q,h);
                break;
            
            default:
                cout<<"The choice entered is a wrong choice";
        }
        cout<<"\nWant to Continue? (Y/N)\n";
        cin>>choice;
    }
    while(choice=='Y' || choice == 'y');
	
	
	return 0;
}

