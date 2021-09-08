
#include <iostream>
using namespace std;
class test{
  
  public:
    int objno;
    static int objcnt;
 
    
    void assign(){
        cout<<"Enter the num value"<<endl;
        cin>> objno;
        
        
    }
    static void printCount(){
        cout<<"Object Count: "<<objcnt<<endl;
    }
    
};
int test::objcnt=20;

int main()
{   
    int num;
    cout<<"Enter the number of customers :"<<endl;
    cin>>num;
    int i;
    test t[num];
    test::printCount();
    
    for(i=0;i<num;i++){
        cout<<"num :"<<t[i].objno<<endl;
    }

    return 0;
}

