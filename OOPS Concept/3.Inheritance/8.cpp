/*8. Write a program to Mathematic operation like Addition, Subtraction, 
Multiplication, Division Of two number using different parameters and 
Function Overloading*/
#include<iostream>
using namespace std;
class A{
	public:
		float sum(int a,float b){
			return a+b;
		}
		int sub(int a,int b){
			return a-b;
		}
		double mul(int a,double b){
			return a*b;
		}
		double div(int a,long b){
			return a/b;
		}
};
int main(){
	
	double x,y;
	
	cout<<"\nenter 1st value:";
	cin>>x;
	cout<<"\nenter 2nd value:";
	cin>>y;
	
	A obj;
	
	cout<<"\nSum of 1st Value and 2nd value is:"<<obj.sum(x,y);
	cout<<"\nSub of 1st Value and 2nd value is:"<<obj.sub(x,y);
	cout<<"\nMul of 1st Value and 2nd value is:"<<obj.mul(x,y);
	cout<<"\nDiv of 1st Value and 2nd value is:"<<obj.div(x,y);
}
