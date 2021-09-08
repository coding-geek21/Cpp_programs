//Using operator overloading perform complex arithmetic operations.

#include<iostream>
using namespace std;

class Complex{
	private:
	    float real,imag;
	
	public:
	    Complex(){
	    	real=0;
			imag=0;
		}
		
		void input() {
	        cout << "Enter real and imaginary parts respectively: ";
	        cin >> real;
	        cin >> imag;
    	}

	
	    Complex operator + (const Complex& obj) {
	        Complex temp;
	        temp.real = real + obj.real;
	        temp.imag = imag + obj.imag;
	        return temp;
	    }
		
		
		Complex operator - (const Complex& obj) {
	        Complex temp;
	        temp.real = real - obj.real;
	        temp.imag = imag - obj.imag;
	        return temp;
	    }
	    
	    Complex operator * (const Complex& obj) {
	        Complex temp;
	        temp.real = real*obj.real-imag*obj.imag;
	        temp.imag = real*obj.imag +imag*obj.real;
	        return temp;
	    }
	    
		void output() {
	        if (imag < 0)
	            cout << "Output Complex number: " << real << imag << "i";
	        else
	            cout << "Output Complex number: " << real << "+" << imag << "i";
	    }	
	
};

int main(){
	
	int ch;
	
	cout<<"Choose Option:"<<endl;
	cout<<"1. Addition \n";
	cout<<"2. subraction \n";
	cout<<"3. Multiplication\n";
	cout<<"enter your choice : ";
	cin>>ch;
	Complex complex1, complex2, result;

    cout << "\nEnter first complex number:\n";
    complex1.input();

    cout << "Enter second complex number:\n";
    complex2.input();


	
	switch(ch){
		case 1:
			result=complex1+complex2;
			result.output();
			break;
		case 2:
			result=complex1-complex2;
			result.output();
			break;
		case 3:
			result=complex1*complex2;
			result.output();
			break;
		default:
			cout<<"Choose the correct option\n";
				
	}
	
	
	return 0;
}

