/*Constructor in Derived Class*/

#include<iostream>
using namespace std;
class superClass{
	public:
		int x;
		
		superClass(int t){
			x=t;
		}
		void printSuper(){
			cout<<"\nx :"<<x;
		}
};
class subClass:public superClass{
	public:
		int y;
		subClass(int b,int a):superClass(a){
			y=b;
		}
		void printSub(){
			cout<<"\ny :"<<y;
		}
};
int main(){
	
	subClass s1(10,5);
	s1.printSub();
	s1.printSuper();
	
}
