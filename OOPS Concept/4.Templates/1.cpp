/*1. Write a program of to swap the two values using template*/

#include<iostream>
using namespace std;
template <typename T>
T swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}
int main(){
	
	int num1, num2;
	double num3, num4;
	char char1,char2;
	
	cout<<"\nenter integer value num1:";
	cin>>num1;
	cout<<"\nenter integer value num2:";
	cin>>num2;
	cout<<"\nenter double value num3:";
	cin>>num3;
	cout<<"\nenter double value num4:";
	cin>>num4;
	cout<<"\nenter character 1:";
	cin>>char1;
	cout<<"\nenter character 2:";
	cin>>char2;
	
	cout<<"\nOriginal integers: " << num1 << " and " << num2;
	swapValues(num1, num2);
	cout << "\nSwapped integers: " << num1 << " and " << num2;
	
	cout << "\nOriginal doubles: " << num3 << " and " << num4;
	swapValues(num3, num4);
	cout << "\nSwapped doubles: " << num3 << " and " << num4;
	
	cout << "\nOriginal characters: " << char1 << " and " << char2;
	swapValues(char1, char2);
	cout << "\nSwapped characters: " << char1 << " and " << char2;


}
