/*2. Define a class to represent a bank account. Include the following members:
3. Data Member:
-Name of the depositor
-Account Number
-Type of Account
-Balance amount in the account
Member Functions
-To assign values
-To deposited an amount
-To withdraw an amount after checking balance
-To display name and balance*/



#include<iostream>
#include<conio.h>
using namespace std;
class Bank {
	private:
		int acno;
		int balance;
		char type;
	public:
		void OpenAccount()
		{
			cout<<"Enter Account Number:";
			cin>>acno;
			cout<<"What type of account you want to open saving(s) or current(c):";
			cin>>type;
			cout<<"Enter Balance:";
			cin>>balance;
		}
		void Deposit()
		{
			int amt;
			cout<<"Enter Amount you want to deposit?:";
			cin>>amt;
			balance=balance+amt;
		}
		void Widhrawal()
		{
			int amt;
			cout<<"Enter Amount you want to withdraw?:";
			cin>>amt;
			if(amt<=balance)
				balance=balance-amt;
			else
				cout<<"Less Balance";
		}
		void PrintData()
		{
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
    			obj1.Widhrawal();
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
