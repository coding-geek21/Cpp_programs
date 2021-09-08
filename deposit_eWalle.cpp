//Inheritance.

//2) Use friend functions to design an e-wallet and deposit money using a bank account.

#include<iostream>
using namespace std;

class BankAccount{
	private:
		int acc_no;
		string Name;
		double balance;
		double deposit;
		friend double DepositMoney(BankAccount);
	public:
		BankAccount(){
			cout<<"\nEnter your name: ";
			cin>>Name;
			cout<<"Enter Account number: ";
			cin>>acc_no;
			cout<<"Enter your balance: ";
			cin>>balance;
			cout<<"Enter Amount to Deposit: ";
			cin>>deposit;
		}
		
		void printDetails(){
			cout<<"\n-----Your Bank Account Details-----\n";
			cout<<"Customer Name : "<<Name<<endl;
			cout<<"Account number: "<<acc_no<<endl;
			cout<<"Balance Amount: "<<balance<<endl;
			
		}

};

double DepositMoney(BankAccount cus){
    double cur_balance;
	cur_balance=cus.balance+cus.deposit;
	return cur_balance;
}

int main(){
	
	int n,i;
	cout<<"Enter the number of Customers: ";
	cin>>n;
	BankAccount cus[n];
	
	for(i=0;i<n;i++){
		cus[i].printDetails();
		cout<<"Balance after Deposit: "<<DepositMoney(cus[i])<<endl;
	}
	
	return 0;
}


