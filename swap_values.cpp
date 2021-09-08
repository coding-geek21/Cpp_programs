// 3. Write a program to swap two numbers using call by value, reference and pointers.

#include<iostream>
using namespace std;

void swap(int &,int &);

int main()
{
        int a,b;
        cout<<"Enter Value Of A :: ";
        cin>>a;
        cout<<"\nEnter Value of B :: ";
        cin>>b;
        
        cout<<"\nBefore Swapping, Value of A = "<<a<<" B = "<<b<<"\n";
        
        swap(a,b);
        
        cout<<"\nOutside Function After Swapping, Value of A = "<<a<<" B = "<<b<<"\n";
}

void swap(int &a,int &b)
{
        int c;
        c=a;
        a=b;
        b=c;
        cout<<"\nInside Function After Swapping, Value of A = "<<a<<" B = "<<b<<"\n";
}





