/*Single Inheritance*/

#include<iostream>
using namespace std;
class employee{
	protected:
		int empid;
		char empname[50];
		double bs;
		
		void get_detail(){
			cout<<"\n enter employee id :";
			cin>>empid;
			cout<<"\n enter employee name :";
			cin>>empname;
			cout<<"\n enter employee Basic Salary :";
			cin>>bs;
		}
};
class salary:public employee{
	private:
		double pf,pt,gross_salary;
	public:
		void get_salary(){
			get_detail();
			pf=bs*0.1;
			pt=2500;
			gross_salary=(bs-pf)-pt;
		}
		
		void display_gross_salary(){
			cout<<"\n empid:"<<empid<<"\n employee name :"<<empname<<"\n employee basic salary "<<bs
			<<"\n employee gross salary "<<gross_salary;
		}
		
};
int main(){
	
	salary s1;
	s1.get_salary();
	s1.display_gross_salary();
}
