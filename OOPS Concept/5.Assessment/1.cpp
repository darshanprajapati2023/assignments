/*C ++ Programming Assessment Test
• Create a Project to demonstrate an Event Organiser Project which will help to manage 
the Events. The Project should contain all the necessary requirements i.e need to use 
conditional Statements, Loops, Function and also A Program should use the concept 
of OOP.
• Give comments where it is required , for better understanding of codes. It will help 
you and the project evaluator.
• A Project should contain the following execution flow.
• When Execution of the main source file, the program should first ask the NAME OF 
THE EVENT.
1. Example : Wedding
2. After asking the event name , it should ask your 
I. FIRST NAME,LAST NAME.
II. Number of Guests.
III. Number of Minutes.
3. Once the all the Input requirement is over, you should be able to get the Event Cost 
Estimation.
 Use the following rate card :
a. const double CostPerHour = 18.50;
b. const double CostPerMinute = .40;
c. const double CostOfDinner = 20.70;
i. GET Number of Servers.
(1 Server can handle 20 guests, so FIND how much server required for No. of Guests you 
Entered.) (Hint : You can use ceil() function . (i.e : rounds up the nearest integer)
ii. GET COST of ONE Server.
Example : 
Cost1 = (NumberOfMinutes / 60) * CostPerHour;
Cost2 = (NumberOfMinutes % 60) * CostPerMinute;
CostForOneServer = Cost1 + Cost2;
iii. GET COST for FOOD.
TotalFoodCost = NumberOfGuests * CostOfDinner;
iv. Get Average Cost Per Person
AverageCost = TotalFoodCost / NumberOfGuests;
v. GET TOTAL COST.
TotalCost = TotalFoodCost + (CostForOneServer * NumberOfServers);
vi. GET DEPOSIT AMOUNT
DepositAmount = TotalCost * .25;
4. After completion this project upload it on GitHub
• Upload all features in develop branch after completion all features
merge it with main branch*/



#include <iostream>
#include <math.h>

using namespace std;
class EventOrganizer {
private:
	
    string eventName;
    string firstName;
    string lastName;
    int numGuests;
    int numMinutes;

public:
    void getEventDetails() {
        cout << "\n******************Event Management System***************\n";
        cout << "\nEnter the name of the event: ";
        cin>>eventName;

        cout << "\nEnter the Customer's first name and last name: ";
        cin>>firstName>>lastName;

        cout << "Enter the number of guests: ";
        cin >> numGuests;

        cout << "Enter the number of minutes in the event: ";
        cin >> numMinutes;
    }

    void calculateEventCost() {
    	
        const double costPerHour = 18.50;
        const double costPerMinute = 0.40;
        const double costOfDinner = 20.70;

        int numServers = ceil(static_cast<double>(numGuests) / 20);

        double cost1 = (static_cast<int>(numMinutes) / 60) * costPerHour;
        double cost2 = (static_cast<int>(numMinutes) % 60) * costPerMinute;
        int costForOneServer = cost1 + cost2;

        double totalFoodCost = numGuests * costOfDinner;


        double averageCost = totalFoodCost / numGuests;

        int totalCost = totalFoodCost + (costForOneServer * numServers);

        int depositAmount = totalCost * 0.25;

        cout << "\n=========Event Estimate for:" << firstName<<lastName<<"===========";
        cout << "\nNumber of Servers: " << numServers;
        cout << "\nThe cost for Server is:"<< costForOneServer;
        cout << "\nTotal Cost for Food is:" << totalFoodCost;
        cout << "\nAverage Cost Per Person:" << averageCost<<"\n";
        cout << "\nTotal Cost is:" << totalCost;
        cout << "\nPlease deposit a 25% deposit to reserve the event"; 
        cout << "\nThe deposit need is:"<< depositAmount;
    }
};

int main() {
	
	
    EventOrganizer eventOrganizer;

    eventOrganizer.getEventDetails();
    
    eventOrganizer.calculateEventCost();

    return 0;
}

