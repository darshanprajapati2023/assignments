/*5. Write a C++ program to create a class called Triangle that has private 
member variables for the lengths of its three sides. Implement member 
functions to determine if the triangle is equilateral, isosceles, or scalene.*/

#include<iostream>
using namespace std;
class Triangle{
	private:
		int side1,side2,side3;
	public:
		Triangle(int s1,int s2,int s3){
			side1=s1;
			side2=s2;
			side3=s3;
		}
		bool isEquilateral(){
			return (side1==side2) && (side2==side3);
		}
		bool isIsosceles(){
			return (side1==side2) || (side2==side3) || (side1==side3);
		}
		bool isScalene(){
			return (side1!=side2) && (side2!=side3) && (side1!=side3);
		}
};

int main(){
	
	int x,y,z;
	
	cout<<"\n enter Triangle Side1:";
	cin>>x;
	cout<<"\n enter Triangle Side2:";
	cin>>y;
	cout<<"\n enter Triangle Side3:";
	cin>>z;
	
	Triangle triangle1(x,y,z);
	
	cout << "\nEquilateral Triangle: " << triangle1.isEquilateral() << endl;
    cout << "Isosceles Triangle: " << triangle1.isIsosceles()<< endl;
    cout << "Scalene Triangle " << triangle1.isScalene() << endl;
}
