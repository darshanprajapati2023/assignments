/*19-29. Write a program in C to calculate and print the electricity bill of a given 
customer. The customer ID, name, and unit consumed by the user should 
be captured from the keyboard to display the total amount to be paid to the 
customer. The charge are as follow :
20. Unit 21. Charge/unit
22. upto 350 23. @1.20
24. 350 and above but less than 600 25. @1.50
26. 600 and above but less than 800 27. @1.80
28. 800 and above 29. @2.00

30. If bill exceeds Rs. 800 then a surcharge of 18% will be charged andthe 
minimum bill should be of Rs. 256/-*/

#include <stdio.h>  
#include <string.h> 

int main()
{
    int custid, conu;  
    float chg, surchg = 0, gramt, netamt;  
    char connm[25];  

    printf("Input Customer ID :");  
    scanf("%d", &custid);  
    printf("Input the name of the customer :");  
    scanf("%s", connm);  
    printf("Input the unit consumed by the customer : ");  
    scanf("%d", &conu);  

    if (conu < 350)
        chg = 1.20;  
    else if (conu >= 350 && conu < 600)
        chg = 1.50; 
    else if (conu >= 600 && conu < 800)
        chg = 1.80;  
    else
        chg = 2.00; 

    gramt = conu * chg;  

    if (gramt > 300)
        surchg = gramt * 18 / 100.0;  

    netamt = gramt + surchg;  

    if (netamt < 100)
        netamt = 100;  

    printf("\nElectricity Bill\n");
    printf("Customer IDNO                       :%d\n", custid);
    printf("Customer Name                       :%s\n", connm);
    printf("unit Consumed                       :%d\n", conu);
    printf("Amount Charges @Rs. %4.2f  per unit :%8.2f\n", chg, gramt);
    printf("Surchage Amount                     :%8.2f\n", surchg);
    printf("Net Amount Paid By the Customer     :%8.2f\n", netamt);
}  
