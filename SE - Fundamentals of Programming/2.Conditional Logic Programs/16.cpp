/*16. Write a C program to read temperature in centigrade and display a suitable 
message according to the temperature state below:
Temp < 0 then Freezing weather 
Temp 0-10 then Very Cold weather 
Temp 10-20 then Cold weather 
Temp 20-30 then Normal in Temp 
Temp 30-40 then Its Hot
Temp >=40 then Its Very Hot*/


#include <stdio.h>  

int main()
{
    float PerTemp;  

    printf("Input the Temperature of the weather (in centigrade) :"); 
    scanf("%f", &PerTemp); 

    if (PerTemp < 0.0)  
        printf("Freezing Weather \n");
    else if ((PerTemp >= 0.0) && (PerTemp < 10.0))   
        printf("Very Cold Weather \n");
    else if ((PerTemp >= 10.0) && (PerTemp <= 20.0))
        printf("Cold Weather \n"); 
    else if ((PerTemp >= 20.0) && (PerTemp <= 30.0))
        printf("Normal in Temperature \n");
    else if ((PerTemp >= 30.0) && (PerTemp <= 40.0))
        printf("Its Hot \n");
    else
        printf("Its very Hot.\n");
}
