/*Polymorphysm-Static-Unary Operator Overloading*/


#include<iostream>
using namespace std;
class Distance{
	public:
		int feet,inches;
		Distance(){
			feet=0;
			inches=0;
		}
		Distance(int f,int i){
			feet=f;
			inches=i;
		}
		void operator-(){
			feet=-feet;
			inches=-inches;
			cout<<"\n feet :"<<feet;
			cout<<"\n inches :"<<inches;
		}
};
int main(){
	Distance D1(10,5),D2(-70,-30);
	
	-D1;
	-D2;
}
