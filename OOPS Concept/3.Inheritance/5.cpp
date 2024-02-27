/*5. Assume that the test results of a batch of students are stored in three different 
classes. Class Students are storing the roll number. Class Test stores the 
marks obtained in two subjects and class result contains the total marks 
obtained in the test. The class result can inherit the details of the marks 
obtained in the test and roll number of students. (Multilevel Inheritance)*/ 

#include<iostream>
using namespace std;
class Student{
	protected:
		int rollno;
	public:
		void get_student_detail(){
			cout<<"\nenter Roll No. :";
			cin>>rollno;
		}
};
class Test:public Student{
	protected:
		float sub1;
		float sub2;
		float total=0;
	public:
		void get_test_detail(){
			cout<<"\nenter Subject 1 Marks :";
			cin>>sub1;
			cout<<"\nenter Subject 2 Marks :";
			cin>>sub2;
			
			total=sub1+sub2;
			
			cout<<"Student Roll No. is:"<<rollno<<"\nTotal Marks is:"<<total;
		}
};
class Result:public Test{
	protected:
		float total;
		float sub1=0;
		float sub2=0;
	public:
		void print_result_detail(){
			cout<<"\nStudent Roll No. is:"<<rollno<<"\nTotal Marks is:"<<total;
		}
};
int main(){
	
	Result r1;
	
	r1.get_student_detail();
	r1.get_test_detail();
	r1.print_result_detail();
}
