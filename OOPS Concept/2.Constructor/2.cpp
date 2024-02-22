/*2. Write a program of Addition, Subtraction, Division, Multiplication using 
constructor.*/

#include<iostream>
#include<conio.h>
using namespace std;
class Calculator {
private:
    int a, b;

public:
    Calculator(int x, int y) {
        a = x;
        b = y;
    }

    int add() {
        return a + b;
    }

    int sub() {
        return a - b;
    }

    int mul() {
        return a * b;
    }
    int div() {
        if (b != 0) {
            return a / b;
        } else {
            cout << "Error: Division by zero\n";
            return 0;
        }
    }
};

int main() {
    int p, q, choice;
    char option;

    cout << "Enter your first value: ";
    cin >> p;
    cout << "Enter your second value: ";
    cin >> q;
    
	Calculator obj(p, q);
	
    do{
    cout<<"\n1.Addition\n2.Substraction\n3.Multiplication\n4.Division";
	cout<<"\nenter choice:";
	cin>>choice;
	switch(choice){
		case 1:
			cout<<"Addition :"<<obj.add();
			break;
		case 2:
			cout<<"Substraction :"<<obj.sub();
			break;
		case 3:
			cout<<"Multiplication :"<<obj.mul();
			break;
		case 4:
			cout<<"Division :"<<obj.div();
			break;
		default:
			cout<<"Invalid choice";
		}printf("\nDo you want to continue y/n?\n");
		option = getch();
	}while (option == 'y');
    return 0;
}
