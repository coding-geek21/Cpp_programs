// Static and constructors

// 1. Write a program to count the number of objects.

#include <iostream>
using namespace std;
class test{
  
  public:
    int objno;
    static int objcnt;
  public:
    test(){
        objno=++objcnt;
    }
    
    static void printCount(){
        cout<<"Object Count: "<<objcnt<<endl;
    }
    
};
int test::objcnt;

int main()
{
    test t1,t2,t4,t9;
    test::printCount();

    return 0;
}

