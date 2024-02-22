/*Hybrid Inheritance*/

#include<iostream>
using namespace std;
class A{
	public:
		void funcA(){
			cout<<"\n class A";
		}
};
class B:virtual public A{
	public:
		void funcB(){
			cout<<"\n class B";
		}
};
class C:virtual public A{
	public:
		void funcC(){
			cout<<"\n class C";
		}
};
class D:public B,public C{
	public:
		void funcD(){
			cout<<"\n class D";
		}
};
int main(){
	
	D obj;
	obj.funcA();
}
