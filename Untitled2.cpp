#include<iostream>
using namespace std;

void fun(int);
void fun(float);

void fun(int i){
	cout<<i<<endl;
}

void fun(float j){
	cout<<j<<endl;
}
int main(){
	fun(12);
	fun(1.2f);
	return 0;
}
