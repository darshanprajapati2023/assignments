/*1. Assume a class cricketer is declared. Declare a derived class batsman from 
cricketer. Data member of batsman. Total runs, Average runs and best 
performance. Member functions input data, calculate average runs, Display 
data. (Single Inheritance)*/

#include<iostream>
using namespace std;
class Cricketer{
	protected:
		string playerName;
		int age;
	public:
		void get_detail(){
			cout<<"Enter Player Name :";
			cin>>playerName;
			cout<<"Enter Player Age :";
			cin>>age;
		}
};
class Batsman:public Cricketer{
	private:
		int totalRuns;
		double averageRuns;
		int bestPerformance;
	public:
		void get_Batsman(){
			get_detail();
			cout<<"Enter total Runs :";
			cin>>totalRuns;
			cout<<"Enter Best Performance :";
			cin>>bestPerformance;
		}
		void calculate_AverageRuns(){
			if(bestPerformance != 0){
				averageRuns=totalRuns/bestPerformance;
			}else{
				averageRuns = 0.0;
			}
		}
		void display_Data(){
			cout<<"\nPlayer Name:"<<playerName;
			cout<<"\nPlayer Age:"<<age;
			cout<<"\nTotal Runs:"<<totalRuns;
			cout<<"\nAverage Runs:"<<averageRuns;
			cout<<"\nBest Performance:"<<bestPerformance;
			
		}
};
int main(){
	
	Batsman batsman;
	batsman.get_Batsman();
	batsman.calculate_AverageRuns();
	batsman.display_Data();
}
