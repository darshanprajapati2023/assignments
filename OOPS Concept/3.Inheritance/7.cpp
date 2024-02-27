/*7. Write a C++ Program to illustrates the use of Constructors in multilevel 
inheritance*/

#include<iostream>
using namespace std;
class Vehicle{
	protected:
		int wheels;
	public:
		Vehicle(int w){
			wheels=w;
			cout<<"\nVehicle constructor called with"<<wheels<<" wheels.";
		}
};
class Car:public Vehicle{
	protected:
		int passangers;
	public:
		Car(int w, int p) : Vehicle(w), passangers(p){
			cout<<"\nCar constructor called with"<<passangers<<"Passangers.";
		}
};
class Sedan:public Car{
	public:
		Sedan(int w, int p) : Car(w, p){
		cout<<"\nSedan constructor called.";
		}
		void display(){
			cout<<"\nSedan has"<<wheels<<"wheels and can carry"<<passangers<<"Passangers.";
		}
};
int main(){
	
	Sedan sedan(4,5);
	
	sedan.display();
}
