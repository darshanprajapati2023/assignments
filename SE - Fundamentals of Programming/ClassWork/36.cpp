#include<iostream>
using namespace std;
class A{
	public:
		A(){
			cout<<"\n constructor";
		}
		void print_msg(){
			cout<<"\n class A print msg";
		}
};
int main(){
	
	A obj1,obj2,obj3;
	obj1.print_msg();
	obj1.print_msg();
	A obj4,obj5;
}
