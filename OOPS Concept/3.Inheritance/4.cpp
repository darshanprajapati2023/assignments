/*4. Write a C++ Program display Student Mark sheet using Multiple inheritance*/

#include<iostream>
using namespace std;
class Student{
	protected:
		string sname;
		int rollno;
	public:
		void get_student_detail(){
			cout<<"\nenter Student Name :";
			cin>>sname;
			cout<<"\nenter Student Roll No. :";
			cin>>rollno;
		}
		
};
class Exam{
	protected:
		float sub1;
		float sub2;
	public:
		void get_exam_detail(){
			cout<<"\nenter sub1 Marks :";
			cin>>sub1;
			cout<<"\nenter sub2 Marks :";
			cin>>sub2;
		}
		
};
class Marksheet:public Student,public Exam{
	public:
		void print_marksheet_detail(){
			cout << "\n\nMark Sheet\n";
			cout<<"\nName:"<<sname;
			cout<<"\nRoll Number:"<<rollno;
			cout<<"\nSubject 1 Marks:"<<sub1;
			cout<<"\nSubject 2 Marks:"<<sub2;
			float total=sub1+sub2;
			cout<<"\nTotal:"<<total;
			float avg=total/2;
			cout<<"\nAverage Marks:"<<avg;
		}
};
int main(){
	
	Marksheet M1;
	
	M1.get_student_detail();
	M1.get_exam_detail();
	M1.print_marksheet_detail();
}
