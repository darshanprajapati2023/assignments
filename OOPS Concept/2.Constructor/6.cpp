/*6. Write a C++ program to implement a class called Employee that has 
private member variables for name, employee ID, and salary. Include 
member functions to calculate and set salary based on employee 
performance. Using of constructor*/

#include<iostream>
#include<string.h>
using namespace std;
class Employee{
	private:
		string name;
		int employeeID;
		double salary;
	public:
		Employee(string empName,int empID,double empSal){
			name=empName;
			employeeID=empID;
			salary=empSal;
		}
		string getName(){
			return name;
		}
		int getEmployeeID(){
			return employeeID;
		}
		double getSalary(){
			return salary;
		}
		void setSalary(double performanceScore){
			salary = 50000.0 + performanceScore * 1000.0;
		}
};
int main(){
	
	string x;
	int y;
	double z;
	
	cout<<"\n enter Employee Name :";
	cin>>x;
	cout<<"\n enter Employee ID :";
	cin>>y;
	cout<<"\n enter employee initial Salary :";
	cin>>z;
	
	Employee emp1(x,y,z);
	
	cout<<"\nEmployee Name:"<<emp1.getName();
	cout<<"\nEmployee ID:"<<emp1.getEmployeeID();
	cout<<"\nInitial Salary: Rs."<<emp1.getSalary();
	
	double performanceScore;
	cout<<"\nEnter perfomance score (out of 10):";
	cin>>performanceScore;
	
	emp1.setSalary(performanceScore);
	
	cout<<"\nUpdated Salary: Rs."<<emp1.getSalary();
}
