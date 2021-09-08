// 2) Find the min and max value of array using function template.

#include <iostream>
using namespace std;

template <typename T>
T findMin(T arr[],int n)
{
    int i;
    T min;
    min=arr[0];
    for(i=0;i<n;i++)
    {
         if(min > arr[i])
        min=arr[i];
    }
    return(min);
}

template <typename T2>
T2 findMax(T2 arr[],int n)
{
    int i;
    T2 max;
    max=arr[0];
    for(i=0;i<n;i++)
    {
         if(max < arr[i])
        max=arr[i];
    }
    return(max);
}


int main()
{
    int iarr[5];
    char carr[5];
    double darr[5];

    cout << "Integer Array: \n";
    for(int i=0; i < 5; i++)
    {
        cout << "Enter integer value "  << i+1 << " : ";
        cin >> iarr[i];
    }

    cout << "Character Array: \n";
    for(int j=0; j < 5; j++)
    {
        cout << "Enter character value " << j+1 << " : ";
        cin >> carr[j];
    }


    cout << "Double values: \n";
    for(int k=0; k < 5; k++)
    {
        cout << "Enter Double values:" << k+1 << " : ";
        cin >> darr[k];
    }
    
    cout<<"Integer Minimum is : "<<findMin(iarr,5)<<"\t"<<"Integer Maximum is : "<<findMax(iarr,5)<<"\n";
    cout<<"Character Minimum is : "<<findMin(carr,5)<<"\t"<<"Character Maximum is : "<<findMax(carr,5)<<"\n";
    cout<<"Double Minimum is : "<<findMin(darr,5)<<"\t"<<"Double Maximum is : "<<findMax(darr,5)<<"\n";

    return 0;
}
