#include<iostream>
using namespace std;
class Shape{
	public:
		virtual void area()=0;
};
class Circle:public Shape{
	float r;
	public:
		void area(){
			cout<<"\nEnter radius :";
			cin>>r;
			cout<<"\nArea of Circle :"<<(3.14*r*r);
		}
};
class Rectangle:public Shape{
	int l,w;
	public:
		void area(){
			cout<<"\nEnter Length :";
			cin>>l;
			cout<<"\nEnter Width :";
			cin>>w;
			cout<<"\nArea of Rectangle :"<<(l*w);
		}
};
class Square:public Shape{
	int s;
	public:
		void area(){
			cout<<"\nEnter Side :";
			cin>>s;
			cout<<"\nArea of Square :"<<(s*s);
		}
};
int main(){
	
	Circle c1;
	c1.area();
	Rectangle r1;
	r1.area();
	Square s1;
	s1.area();
}
