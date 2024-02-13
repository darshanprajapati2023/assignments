#include<iostream>
using namespace std;
class simple{
	private:
		float p,r,n,si;
	public:
		
		simple(float a,float b,float c){
			p=a;
			r=b;
			n=c;
		}
		void cal_si(){
			si=(p*r*n)/100;
		}
		void print_si(){
			cout<<"\n simple interest is :"<<si;
		}
};
int main(){
	
	float x,y,z;
	
	cout<<"\n principle amount :";
	cin>>x;
	cout<<"\n rate of interest :";
	cin>>y;
	cout<<"\n number of years :";
	cin>>z;
	
	simple obj(x,y,z);
	obj.cal_si();
	obj.print_si();
	
}
