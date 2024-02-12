#include<iostream>
using namespace std;
class employee{
	public:
		int emp_no;
		char emp_name[50],emp_email[50];
		
		employee(){
			cout<<"\n enter number: ";
			cin>>emp_no;
			
			cout<<"\n enter name:";
			cin>>emp_name;
			
			cout<<"\n enter email:";
			cin>>emp_email;
			
		}
		
		void print_data(){
			cout<<"\n"<<emp_no<<"\t"<<emp_name<<"\t\t"<<emp_email;
		}
};
int main (){
	
	employee e1,e2;
	e1.print_data();
	e2.print_data();
}
