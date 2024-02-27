/*6. Write a C++ Program to show access to Private Public and Protected using 
Inheritance*/

#include<iostream>
using namespace std;
class Base{
	private:
		int privateMember;
	protected:
		int protectedMember;
	public:
		int publicMember;
		
		Base(int privateVal,int protectedVal,int publicVal){
			privateMember=privateVal;
			protectedMember=protectedVal;
			publicMember=publicVal;
		}
		void display(){
			cout<<"\nPrivate Member:"<<privateMember;
			cout<<"\nProtected Member:"<<protectedMember;
			cout<<"\nPublic Member:"<<publicMember;
		}
};
class Derived:public Base{
	public:
	 	Derived(int privateVal, int protectedVal, int publicVal)
        : Base(privateVal, protectedVal, publicVal) {}
		
		void accessBaseMembers(){
			protectedMember=20;
			publicMember=30;
		}
};
int main(){
	
	Derived derivedObj(10,15,25);
	
	derivedObj.accessBaseMembers();
	
	derivedObj.display();
}
