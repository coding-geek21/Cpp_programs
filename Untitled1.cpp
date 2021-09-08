#include<iostream>

class GFG{
	public:
		static int i;
		
		GFG(){
			
		}
	
	
};
int GFG::i=0;



int main(){
	GFG obj1;
	GFG obj2;
	
	//obj1.i=2;
	//obj2.i=3;
	
	GFG::i=2;
	GFG::i=13;
	
	cout<<obj1.i<<' '<<obj2.i;
	
	return 0;
}
