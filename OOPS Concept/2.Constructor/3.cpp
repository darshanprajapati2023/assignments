/*3. Write a C++ program to create a class called Car that has private 
member variables for company, model, and year. Implement member 
functions to get and set these variables.*/

#include<iostream>
#include<string.h>
using namespace std;
class Car{
	private:
		string company;
		string model;
		int year;
	public:
		Car(string a,string b,int c){
			company=a;
			model=b;
			year=c;
		}
		string get_Company(){
			return company;
		}
		string get_Model(){
			return model;
		}
		int get_Year(){
			return year;
		}
};
int main(){
	
	string x;
	string y;
	int z;
	
	cout<<"\n enter Car Company Name :";
	cin>>x;
	cout<<"\n enter Car Model Name :";
	cin>>y;
	cout<<"\n enter Car Model Year :";
	cin>>z;
	
	Car obj(x,y,z);
	
	
	cout << "\nCar Company: " << obj.get_Company() << endl;
    cout << "Car Model: " << obj.get_Model() << endl;
    cout << "Car Year: " << obj.get_Year() << endl;
}
