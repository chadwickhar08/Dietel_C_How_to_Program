/*Exercise 3.8 in Chapter 3 */

/*Write a C program that uses the statements in Exercise 3.7 to calculate x raised to the y power. Program should have a while repetition control statement*/

#include <stdio.h>

int main(void)
{
    /*Raise x to the power of some number, initialize variables*/
    int counter = 1;
    int x, power;
    int result = 1;
    
    /*ask for input from the user for the number and power*/
    
    printf("Please enter the number: \n");
    scanf("%d", &x);
    
    printf("Please enter the power to raise the number to: \n");
    scanf("%d", &power);
    
    /*use while construct to calculate power*/
    
    while(counter <= power)
    {
        /*take the result of the first multiplication pass and multiply it by the next iteration*/
        result *= x;
        counter++;
    }
    
    printf("The result is %d\n", result);
    
    
    return 0;
}
