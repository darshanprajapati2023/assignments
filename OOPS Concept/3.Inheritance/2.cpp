/*2. Write a C++ Program to find Area of Rectangle using inheritance*/


#include<iostream>
using namespace std;
class Rectangle{
	protected:
		int length;
		int width;
	public:
		void get_detail(){
			cout<<"enter length :";
			cin>>length;
			cout<<"enter width :";
			cin>>width;
		}
};
class Area:public Rectangle{
	public:
		int calculate_Area(){
			return length*width;
		}
		void display_Data(){
			cout<<"Area of Rectangle :"<<calculate_Area();
		}
};
int main(){
	
	Area A1;
	A1.get_detail();
	A1.display_Data();
}
