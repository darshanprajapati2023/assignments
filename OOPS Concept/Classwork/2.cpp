#include<iostream>
using namespace std;
class student{
	public:
		//data member
		int rollno;
		float per;
		char name[50];
		
		//member functions
		void get_data(){
			cout<<"\n enter rollno:";
			cin>>rollno;
			
			cout<<"\n enter name:";
			cin>>name;
			
			cout<<"\n enter per:";
			cin>>per;
			
		}
		void print_data(){
			cout<<"\n rollno :"<<rollno<<" name :"<<name<<" per: "<<per;
			
		}
};
int main(){
	//object
	student obj1,obj2,obj3;
	obj1.get_data();
	obj2.get_data();
	obj3.get_data();
	
	obj1.print_data();
	obj2.print_data();
	obj3.print_data();
}
