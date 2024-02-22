/*8. Write a C++ program to implement a class called Student that has private 
member variables for name, class, roll number, and marks. Include 
member functions to calculate the grade based on the marks and display 
the student's information. Accept address from each student implement 
using of aggregation*/

#include<iostream>
using namespace std;
class Student{
	private:
		string name;
		string className;
		int rollno;
		int marks;
	public:
		Student(string a,string b,int c,int d){
			name=a;
			className=b;
			rollno=c;
			marks=d;
		}
		void print_data(){
			cout<<"\nName :"<<name<<"\nClassName :"<<className<<"\nRollNo. :"<<rollno
			<<"\nMarks :"<<marks;
		}
		void get_garde(){
			if(marks<100 && marks>80){
				cout<<"Grade:A";
			}else if (marks<80 && marks>60){
				cout<<"Grade:B";
			}else if(marks<60 && marks>40){
				cout<<"Garde:C";
			}else{
				cout<<"Garde:D";
			}		
		}
};
int main(){
	
	string p;
	string q;
	int r;
	int s;
	
	cout<<"\nEnter Student Name :";
	cin>>p;
	cout<<"\nEnter Student Class Name:";
	cin>>q;
	cout<<"\nEnter Student Roll No.:";
	cin>>r;
	cout<<"\nEnter Student Marks:";
	cin>>s;
	
	Student s1(p,q,r,s);
	s1.get_garde();
	s1.print_data();
}
