/*Scope resolution Operator*/

#include<iostream>
using namespace std;
class myClass{
	public:
		void fun1();
};
void myClass::fun1(){
	cout<<"\n hello from myClass";
	
}

int a=10;
int main(){
	
	int a=20;
	
	cout<<"\n local a:"<<a;
	cout<<"\n Global a:"<<::a;
	
	myClass m1;
	m1.fun1();
}
