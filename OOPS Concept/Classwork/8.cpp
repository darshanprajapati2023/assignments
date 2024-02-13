#include<iostream>
using namespace std;
class factorial{
	private:
		int i,n,fact;
	public:
		factorial(int a){
			n=a;
		}
		void calc_factorial(){
			for(i=1;i<=n;i++){
				fact=fact*i;
			}
			
		}
		void print_factorial(){
			cout<<"\n Factorial is:"<<fact;
		}
};

int main(){
	
	int x;
	
	cout<<"\n enter number:";
	cin>>x;
	
	
	
	factorial obj(x);
	obj.calc_factorial();
	obj.print_factorial();
	
	
}
