
// 3)  Use multilevel inheritance to find area, perimeter, volume, surface area.


#include<iostream>
using namespace std;

class perimeter{
	public:
		double r;
		double p;
		
	void input(){
		cout<<"Enter the radius: ";
		cin>>r;	
	}
	
	void CalcPerimeter(){
		p=2*3.14*r;
		cout<<"Perimeter of the circle: "<<p<<endl;
	}
	
	
};

class area:public perimeter{
	public:
		double a;
	void CalcArea(){
		a=(p/2)*r;
		cout<<"Area of the Circle: "<<a<<endl;
	}
};

class surfArea: public area{
	public:
		double surf;
	void CalcSurfArea(){
		surf=4*a;
		cout<<"Surface Area of the sphere: "<<surf<<endl;
	}
};

class Volume: public surfArea{
	public:
		double v;
	void CalcVolume(){
		v=(surf/3)*r;
		cout<<"Volume of sphere: "<<v<<endl;
	}
	
};

int main(){
		
	Volume s1;
	
	s1.input();
	s1.CalcPerimeter();
	s1.CalcArea();
	s1.CalcSurfArea();
	s1.CalcVolume();	
	
	return 0;
}


