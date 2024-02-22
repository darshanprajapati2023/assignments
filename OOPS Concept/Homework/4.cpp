/*Heirachical Inheritance*/

#include<iostream>
#include<math.h>
using namespace std;
class Value{
	protected:
		int n,num;
	public:
		void get_value(int a,int d){
			n=d;
			num=a;
		}
};
class Square:public Value{
	private:
		int square;
	public:
		void get_square(){
			square=pow(num,2);
		}
		void print_square(){
			cout<<"\n Square :"<<square;
		}
};
class Cube:public Value{
	private:
		int cube;
	public:
		void get_cube(){
			cube=pow(num,3);
		}
		void print_cube(){
			cout<<"\n Cube :"<<cube;
		}
};
class Power:public Value{
	private:
		int power;
	public:
		void get_power(){
		for(int i=1;i<=n;i++)
			power=pow(num,n);
		}
		void print_power(){
			cout<<"\n Power :"<<power;
		}
};
int main(){
	Square s1;
	Cube c1;
	Power p1;
	int b,c;
	cout<<"\n enter your value :";
	cin>>b;
	cout<<"\n enter your power value:";
	cin>>c;
	s1.get_value(b,2);
	s1.get_square();
	s1.print_square();
	c1.get_value(b,3);
	c1.get_cube();
	c1.print_cube();
	p1.get_value(b,c);
	p1.get_power();
	p1.print_power();
}
