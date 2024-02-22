/*Abstract Class with Pure Virtual Function*/

#include<iostream>
using namespace std;
class vehicle{
	protected:
		virtual void engine()=0;
};
class car:public vehicle{
	public:
		void engine(){
			cout<<"\n car engine";
		}
};
class truck:public vehicle{
	public:
		void engine(){
			cout<<"\n truck engine";
		}
};
int main(){
	
	car c1;
	c1.engine();
	
	truck t1;
	t1.engine();
}
