/*Single Inheritance*/

#include<iostream>
using namespace std;
class student{
	protected:
		int rollno;
		char name[50];
		
		void get_detail(){
			cout<<"\n enter rollno:";
			cin>>rollno;
			cout<<"\n enter name:";
			cin>>name;
		}
};
class result:public student{
	private:
		double per;
	public:
		void get_percentage(){
			get_detail();
			cout<<"\n enter percentage:";
			cin>>per;
		}
		
		void display_result(){
			cout<<"\n rollno:"<<rollno<<" name :"<<name<<" per :"<<per;
		}
};
int main(){
	result r1;
	r1.get_percentage();
	r1.display_result();
}
