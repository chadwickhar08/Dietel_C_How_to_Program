/*(Gas Mileage) Drivers are concerned with the mileage obtained by their automobiles. One
driver has kept track of several tankfuls of gasoline by recording miles driven and gallons used for
each tankful. Develop a program that will input the miles driven and gallons used for each tankful.*/

#include <stdio.h>

int main(void)
{
    /*define the number of gallons used and miles travelled*/
    float gallons, miles;
    
    /*define the mpg for the gallons used and miles travelled*/
    float mpg, average;
    
    /*Define a counter for total number*/
    int counter = 0;
    
    /*Define a total*/
    float total;
    
    printf("Enter the gallons used (-1 to end): ");
    scanf("%f", &gallons);
    
    while(gallons != -1)
    {
        printf("Enter the miles driven: ");
        scanf("%f", &miles);
        
        mpg = miles / gallons;
        total += mpg;
        counter += 1;
        printf("The miles / gallon for this tank was: %.6f\n", mpg);
        
        printf("Enter the gallons used (-1 to end): ");
        scanf("%f", &gallons);
        
    }
    
    if(counter != 0)
    {
        printf("The overall average miles/gallon was: %.6f\n", total/counter);   
    }
    
    return 0;    
}
