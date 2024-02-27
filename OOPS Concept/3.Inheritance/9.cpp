/*9. Write a Program of Two 1D Matrix Addition using Operator Overloading*/

#include<iostream>
using namespace std;
class Matrix{
	private:
		int i,e[3];
	public:
		Matrix getMatrix(){
			cout<<"\n Enter the element of Matrix :";
			for(i=0;i<3;i++){
				cin>>e[i];
			}
		}
		Matrix operator +(Matrix m){
			Matrix sumMatrix;
			for(i=0;i<3;i++){
				sumMatrix.e[i]=e[i]+m.e[i];
			}
			return sumMatrix;
		}
		void displayMatrix(){
			for(i=0;i<3;i++){
				cout<<e[i];
			}
		}
};
int main(){
	Matrix m1,m2,m3;
	
	cout<<"\n1st matrix";
	m1.getMatrix();
	m1.displayMatrix();
	cout<<"\n2nd Matrix";
	m2.getMatrix();
	m2.displayMatrix();
	m3=m1+m2;
	cout<<"\nThe sum of two matrices is:";
	m3.displayMatrix();
}
