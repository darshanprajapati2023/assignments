/*3. Create a class person having members name and age. Derive a class student 
having member percentage. Derive another class teacher having member 
salary. Write necessary member function to initialize, read and write data. 
Write also Main function (Multiple Inheritance)*/

#include<iostream>
using namespace std;
class Person{
	protected:
		string pname;
		int age;
	public:
		void get_person_detail(){
			cout<<"\nenter Person Name :";
			cin>>pname;
			cout<<"\nenter Person Age :";
			cin>>age;
		}
		
		void print_person_detail(){
			cout<<"\nPerson Name is:"<<pname<<"\nPerson Age is:"<<age;
		}
};
class Student{
	protected:
		string sname;
		float per;
	public:
		void get_student_detail(){
			cout<<"\nenter Student Name :";
			cin>>sname;
			cout<<"\nenter Student Percentage :";
			cin>>per;
		}
		void print_student_detail(){
			cout<<"\nStudent Name is:"<<sname<<"\nStudent Percentage is:"<<per;
		}
};
class Teacher:public Person,public Student{
	protected:
		string tname;
		int salary;
	public:
		void get_teacher_detail(){
			cout<<"\nenter Teacher Name :";
			cin>>tname;
			cout<<"\nenter Salary :";
			cin>>salary;
		}
		void print_teacher_detail(){
			cout<<"\nTeacher Name is:"<<tname<<"\nTeacher Salary is:"<<salary;
		}
};
int main(){
	
	Teacher t1;
	
	t1.get_person_detail();
	t1.print_person_detail();
	t1.get_student_detail();
	t1.print_student_detail();
	t1.get_teacher_detail();
	t1.print_teacher_detail();
}
