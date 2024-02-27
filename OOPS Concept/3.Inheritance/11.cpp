/*11. Write a program to calculate the area of circle, rectangle and triangle 
using Function Overloading
Rectangle: Area * breadth 
Triangle: ½ *Area* breadth 
Circle: Pi * Area *Area*/

#include<iostream>
using namespace std;
class Shape{
	public:
		int Rectangle(int length,int width){
			return (length*width);
		}
		float Triangle(int length, float width){
			return (0.5*length*width);
		}
		double Circle(int radius){
			return (3.14*radius*radius);
		}
};
int main(){
	
	int x,y;
	float z;
	
	cout<<"\nenter length :";
	cin>>x;
	cout<<"\nenter width :";
	cin>>y;
	cout<<"\nenter radius :";
	cin>>z;
	
	Shape obj;
	
	
	cout<<"\nArea of Rectangle is :"<<obj.Rectangle(x,y);
	cout<<"\nArea of Triangle is :"<<obj.Triangle(x,y);
	cout<<"\nArea of Circle is :"<<obj.Circle(z);
}
