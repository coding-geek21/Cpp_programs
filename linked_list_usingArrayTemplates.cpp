//Write a C++ program to implement linked list using array and templates. 
//Perform exception handling if the list is empty or full. 

#include <iostream>
#include <string.h>
using namespace std;
#define SIZE 5

template <class T>
class List
{
    public:
    T data;

    void insert (T arr[],int &n,T value)
    {
        int pos;

        try {
            if (n == SIZE)
                throw "Overflow";
        }catch (const char* msg) {
            cerr << msg << endl;
        }
        cout<<"Enter position to insert value: ";
        cin>>pos;

        for(int i=n;i>=pos-1;i--)
            arr[i+1]=arr[i];
        arr[pos]=value;
        n++;
    }

    void del (T arr[],int &n, T value)
    {
        try {
            if (n == 0)
                throw "Underflow";
        }catch (const char* msg) {
            cerr << msg << endl;
            return;
        }

        int pos = find(arr, n, value);
        if (pos == - 1)
        {
            cout << "Element not found\n";
            return ;
        }

        for (int i = pos; i < n - 1; i++)
            arr[i] = arr[i + 1];
        n--;
    }

    int find(T arr[], int n, T value)
    {
        int i;
        for (i = 0; i < n; i++)
            if (arr[i] == value)
                return i;

        return -1;
    }

    void display(T arr[],int n)
    {
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }
};

int main ()
{
    List<int> l1;
    List<float> l2;
    List<char> l3;

    int arr1[SIZE];
    float arr2[SIZE];
    char arr3[SIZE];
    int n;
    cout<<"Enter size of list: ";
    cin>>n;

    char type[10];
    cout<<"Enter type(int/float/char): ";
    cin>>type;
    if(n!=0)
        cout<<"Enter "<<n<<" values: ";
    if(strcmp(type,"int")==0)
    {
        for(int i=0;i<n;i++)
            cin>>arr1[i];
    }
    else if(strcmp(type,"float")==0)
    {
        for(int i=0;i<n;i++)
            cin>>arr2[i];
    }
    else if(strcmp(type,"char")==0)
    {
        for(int i=0;i<n;i++)
            cin>>arr3[i];
    }
    int opt;
    int pos;
    do
    {
        cout<<"\n\t\tMENU\n1.Insert\n2.Delete\n3.Search\n4.Display\n5.Exit\n";
        cout<<"\nEnter choice: ";
        cin>>opt;

        int int_value;
        float float_value;
        char char_value;
        switch(opt)
        {
            case 1:
            {
                cout<<"Enter value to be inserted: ";
                if(strcmp(type,"int")==0)
                {
                    cin>>int_value;
                    l1.insert(arr1,n,int_value);
                }
                else if(strcmp(type,"float")==0)
                {
                    cin>>float_value;
                    l2.insert(arr2,n,float_value);
                }
                else if(strcmp(type,"char")==0)
                {
                    cin>>char_value;
                    l3.insert(arr3,n,char_value);
                }
                break;
            }

            case 2:
            {
                cout<<"Enter value to be deleted: ";
                if(strcmp(type,"int")==0)
                {
                    cin>>int_value;
                    l1.del(arr1,n,int_value);
                }
                else if(strcmp(type,"float")==0)
                {
                    cin>>float_value;
                    l2.del(arr2,n,float_value);
                }
                else if(strcmp(type,"char")==0)
                {
                    cin>>char_value;
                    l3.del(arr3,n,char_value);
                }
                break;
            }

            case 3:
            {
                cout<<"Enter value to be searched: ";
                if(strcmp(type,"int")==0)
                {
                    cin>>int_value;
                    pos=l1.find(arr1,n,int_value);
                }
                else if(strcmp(type,"float")==0)
                {
                    cin>>float_value;
                    pos=l2.find(arr2,n,float_value);
                }
                else if(strcmp(type,"char")==0)
                {
                    cin>>char_value;
                    pos=l3.find(arr3,n,char_value);
                }
                if(pos!=-1)
                    cout<<"Element found at position: "<<pos<<"\n";
                else
                    cout<<"Element not found\n";

                break;
            }

            case 4:
            {
                if(n==0)
                {
                    cout<<"Empty List\n";
                }
                else if(strcmp(type,"int")==0)
                {
                    l1.display(arr1,n);
                }
                else if(strcmp(type,"float")==0)
                {
                    l2.display(arr2,n);
                }
                else if(strcmp(type,"char")==0)
                {
                    l3.display(arr3,n);
                }
                break;
            }

            default:
                cout<<"Exiting...\n";
                break;
        }
    }while(opt>0 && opt<=4);
  return 0;
}
