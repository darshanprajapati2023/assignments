#include<iostream>
#include<conio.h>
using namespace std;
class calc{
	private:
		int a,b;
	public:
		void get_calc(int x,int y){
		
		 a=x;
		 b=y;
	}
			
	int add()
	{
		return a+b;
	}
	int sub()
	{
		return a-b;
	}
	int mul()
	{
		return a*b;
	}
	int div()
	{
		return a/b;
	}
};

int main(){
	int ch,m,n;
	char option;
	calc obj1,obj2,obj3,obj4;
	do{
		cout<<"\n enter your first value :";
		cin>>m;
		cout<<"\nenter second value :";
		cin>>n;
		cout<<"\n1.Addition\n2.Substraction\n3.Multiplication\n4.Division";
		cout<<"\nenter choice:";
		cin>>ch;
		switch(ch)
		{
			case 1:
				obj1.get_calc(m,n);
				cout<<"Addition :"<<obj1.add();
				break;

			case 2:
				obj2.get_calc(m,n);
				cout<<"Substraction :"<<obj2.sub();
				break;
			case 3:
				obj3.get_calc(m,n);
				cout<<"Multiplication :"<<obj3.mul();
				break;
				
			case 4:
				obj4.get_calc(m,n);
				cout<<"Division :"<<obj4.div();
				break;
			default:
				cout<<"Invalid choice";
	}printf("\nDo you want to continue y/n?\n");
		option = getch();
	}while (option == 'y');
}
