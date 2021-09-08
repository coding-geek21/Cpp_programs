//Write a C++ program to implement queue using templates.
// Overload ‘new’ operator for insertion, Overload ‘delete‘ operator to delete a value.
// Perform exception handling if queue is empty or full.

#include<iostream>
using namespace std;

template<class T>
class Queue
{   public:
        T List[5];
        int front=-1, rear=-1;
        Queue();
        void* operator new(size_t s, Queue* Q);
        void operator delete(void* Q);
        void printQueue();
};

template<class T>
Queue<T>::Queue()
{  }

template<class T>
void* Queue<T>::operator new(size_t s, Queue *Q)
{   try
    {   if(Q->rear==4)
            throw("Queue is full!\n");
        if(Q->front==-1)
        {   cout<<"First element is being added!\n";
            (Q->front)++;
        }
        (Q->rear)++;
        cout<<"Enter data :";
        cin>>Q->List[Q->rear];
        void * p = ::operator new(s);
        return p;
    }
    catch(const char* msg)
    {   cout<<msg; 
        void * p = ::operator new(s);
        return p;
    }
    
}

template<class T>
void Queue<T>::operator delete(void* temp)
{   try
    {   Queue<T>* Q= (Queue<T>*)temp;
        if(Q->front==-1)
            throw("Queue is Empty!\n");
        if(Q->front==Q->rear)
        {   cout<<"Deleting the last element!\n";
            Q->front=-1; Q->rear=-1;
        }
        else
            Q->front++;
    }
    catch(const char* msg)
    {   cout<<msg;  }
}


template<class T>
void Queue<T>::printQueue()
{   try
    {   if(front==-1)
            throw("Queue is Empty!\n");
    }
    catch(const char* msg)
    {   cout<<msg; 
        return;
    }
    int t=front;
    while(t<=rear)
    {   cout<<List[t]<<"\t";
        t++;
    }
}

int main()
{   Queue<int> Q;
    Queue<int>* temp;
    void* ptr=(void*)&Q;
    int opt=0;
    cout<<"Queue As Array - size 5\n";
    cout<<"1.Enqueue\n";
    cout<<"2.Dequeue\n";
    cout<<"3.Display\n";
    cout<<"0.Exit\n";    
    do
    {   cout<<"\nEnter choice: ";
        cin>>opt;
        switch(opt)
        {   case 1: temp=new(&Q) Queue<int>();break;
            case 2: delete(&Q);break;
            case 3: Q.printQueue();break;
            case 0: break;
            default:cout<<"Invalid choice!\n";
        }
    }while(opt!=0);
    return 0;
}
