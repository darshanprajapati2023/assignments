/*7. Write a C++ program to implement a class called Date that has private 
member variables for day, month, and year. Include member functions to 
set and get these variables, as well as to validate if the date is valid.*/

#include<iostream>
using namespace std;
class Date{
	private:
		int day;
		int month;
		int year;
	public:
		Date(int d,int m,int y){
			day=d;
			month=m;
			year=y;
		}
		int getDay(){
			return day;
		}
		int getMonth(){
			return month;
		}
		int getYear(){
			return year;
		}
		bool isValiDate(){
			if(year<0 || month<1 || month>12 || day<1){
				return false;
			}
			
		int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            daysInMonth[2] = 29;
        }

        return (day <= daysInMonth[month]);
		}
};
int main(){
	
	int x,y,z;
	
	cout<<"\nenter initial Date :";
	cin>>x;
	cout<<"\nenter intial Month :";
	cin>>y;
	cout<<"\nenter initial Year :";
	cin>>z;
	
	Date myDate(x,y,z);
	
	cout<<"Initial date:"<<myDate.getDay()<<"/"<<myDate.getMonth()<<"/"<<myDate.getYear();
	
	if(myDate.isValiDate()){
		cout<<"The date is valid.";	
	}else{
		cout<<"The date is invalid.";
	}
}
