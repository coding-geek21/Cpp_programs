//Get data and time input from user in specified format (Date: dd/mm/yy, Time: H-M-S).
// Use operator overloading to manipulate date and time 
//(perform increment and decrement operations)

#include<iostream>
using namespace std;
class DateTime
{
 int d,m,y,hr,min,sec;
 public:
 	DateTime(){
 		
	cout<<"Enter Date ";
  	cin>>d;
  	cout<<"Enter month ";
  	cin>>m;
  	cout<<"Enter year ";
  	cin>>y;
  	cout<<"Enter hours ";
  	cin>>hr;
  	cout<<"Enter minutes ";
  	cin>>min;
  	cout<<"Enter seconds ";
  	cin>>sec;
	
	}
 void increment()
 {
  sec++;
  if(sec>=60)
  {
   sec = sec-60;
   min++;
   if(min>=60)
   {
    min = min-60;
    hr++;
    if(hr>=24)
    {
     hr = hr-24;
     d++;
     if(d>=31 && (m==4 || m==6 || m==9 ||m == 11))
     {
       d = d-30;
       m++;
     }
     if(d>=32 && (m == 1 || m==3 || m==5 || m==7 || m==8 || m==10 ||m==12))
     {
      d=d-31;
      m++;
     }
     if( d >= 29 && m ==2 &&((y%4==0&& y%100 !=0)|| y%400 ==0 ))
     {
      d = d-28;
      m++;
     }
     else if( d>=28 && m==2 &&!((y%4==0&& y%100 !=0)|| y%400 ==0 ))
     {
      d=d-27;
      m++ ;
     }
     if(m>=13)
     {
      m = m-12;
      y++;
     }
    }
   }
  }
 }
 void display()
 {
  cout<<d<<"/"<<m<<"/"<<y<<"   "<<hr<<":"<<min<<":"<<sec<<endl<<endl;
 }

 void decrement()
 {
  sec--;
  if(sec<0)
  {
   sec =sec+60;
   min--;
   if(min<0)
   {
    min = min +60;
    hr--;
    if(hr<0)
    {
     hr = hr+24;
     d--;
     if(d<1 && (m==1||m==4 || m==6||m==8 || m==9 ||m == 11|| m==2))
     {
       d = d+31;
       m--;
     }
     if(d<1 && (m == 5 || m==7 || m==10 || m==12))
     {
      d=d+30;
      m--;
     }
     if( d <1 && m ==3 &&((y%4==0&& y%100 !=0)|| y%400 ==0 ))
     {
      d = d+28;
      m--;
     }
     else if( d<1 && m==3)
     {
      d=d+27;
      m-- ;
     }
     if(m<1)
     {
      m = m+12;
     y--;
     }

    }
   }

  }
 }
};
int main()
{
 int ch;
 DateTime date;
 
    cout<<"\t\tMENU\n1.Increment\n2.Decrement\n3.Exit\n\nEnter your choice ";
    cin>>ch;
	switch(ch)
	{
	  	case 1:
	   		date.increment();
	   		date.display();
	   		break;
	  
	    case 2:
	  	    date.decrement();
	  	    date.display();
	  	    break;
	  	    
		default:
		    cout<<"Invalid choice !"<<endl;  
	    
 	}
 	
 return 0;
}
