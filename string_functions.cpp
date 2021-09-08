// Text editor

#include<iostream>
#include<string>
using namespace std;


int main(){
	
	int ch;
	string s2;
	string s;	
	cout << "Enter String : ";
    getline (cin,s);
	char choice;
	do{
		cout<<"-------MENU-------"<<endl<<endl;
		cout<<"1. Find length\n2.Insert char at the end\n3.Delete a char at the end\n4.Find a letter at Xth position\n5.Join two strings\n";
		cout<<"6.Check whether string exist or not\n7.Delete text\n8.Extract a part of the text\n9.Find a char in string"<<endl<<endl;
		cout<<"Enter your choice: ";
		cin>>ch;
		
		switch(ch){
			case 1:
				cout<<"The length of the given string is:"<<s.length()<<endl;
				break;			
			case 2:
				char c1;
				cout<<"Enter a char to add at the end:";
				cin>>c1;
				s.push_back(c1);
				cout<<"After adding a char\n String is: "<<s<<endl;
				break;
			case 3:
				s.pop_back();
				cout<<"After Deleting a char\n String is: "<<s<<endl;
				break;
			case 4:
				int pos;
				cout<<"Enter the position:";
				cin>>pos;
				cout<<"Char at position "<<pos<<" is :"<<s[pos]<<endl;
				break;
			case 5:
				
				cout<<"Enter a string to join: ";
				cin>>s2;
				s=s+s2;
				cout<<"String after join:\n"<<s<<endl; 
				break;
			case 6:
				if(s.empty()){
					cout<<"The given string is empty"<<endl;
				}
				else{
					cout<<"given string is not empty"<<endl;
				}
				break;
			case 7:
				s.clear();
				cout<<"length of string after deleting: "<<s.length()<<endl;
				break;
			case 8:
				int pos2;
				cout<<"Enter the position to extract: ";
				cin>>pos2;
				cout<<s.substr(pos2)<<endl;	
				break;
			case 9:
				char c4;
				cout<<"Enter the character to find it's position: ";
				cin>>c4;
				cout<<"char: "<<c4<<" is found in position: "<<s.find(c4)<<endl;
				break;
			default:
				cout<<"Invalid choice!";
			
		}
		
	}while(ch!=10);
	
	
			
}
