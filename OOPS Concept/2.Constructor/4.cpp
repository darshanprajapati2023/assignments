/*4. Write a C++ program to implement a class called Bank Account that has 
private member variables for account number and balance. Include 
member functions to deposit and withdraw money from the account.*/

#include<iostream>
#include<conio.h>
using namespace std;
class Bank{
	private:
		int acno;
		int balance;
		char type;
	public:
		void get_value(int a,int b,char c){
			acno=a;
			balance=b;
			type=c;		
		}
		int OpenAccount(){
			cout<<"Enter Account Number:";
			cin>>acno;
			cout<<"What type of account you want to open saving(s) or current(c):";
			cin>>type;
			cout<<"Enter Balance:";
			cin>>balance;
		}
		int Deposit(){
			int amt;
			cout<<"Enter Amount you want to deposit?:";
			cin>>amt;
			balance=balance+amt;
		}
		int Widhrawl(){
			int amt;
			cout<<"Enter Amount you want to withdraw?:";
			cin>>amt;
			if(amt<=balance)
				balance=balance-amt;
			else
				cout<<"Less Balance";
		}
		int PrintData(){
			cout<<"\nAccount No:"<<acno;
			cout<<"\nBalance:"<<balance;
		}
};
int main(){
	
	Bank obj1;
	int choice,m,n;
	char option;
	
	do{
		cout << "\n1.OPEN ACCOUNT\n";
    	cout << "\n2. MONEY DEPOSIT\n";
    	cout << "\n3.WITHDRAW MONEY\n";
    	cout << "\n4.DISPLAY MY ACCOUNT\n";
    	cin >> choice;
    	switch(choice)
    	{
    		case 1:
    			obj1.OpenAccount();
    			break;
    		case 2:
    			obj1.Deposit();
    			break;
    		case 3:
    			obj1.Widhrawl();
    			break;
    		case 4:
    			obj1.PrintData();
    			break;
			default:
				cout<<"Invalid choice";
	}printf("\nDo you want to continue y/n?\n");
		option = getch();
	}while (option == 'y');
}
