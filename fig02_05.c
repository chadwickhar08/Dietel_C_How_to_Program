/*Fig. 2.5: fig02_05.c
 * Addtion program */

#include <stdio.h>

/*function main begins program execution*/
int main(void)
{
    int integer1; /*first number to be input by user*/
    int integer2; /*second number to be input by user*/
    int sum; /*variable in which sum will be stored*/
    
    printf("Enter first integer\n");/*prompt*/
    scanf("%d", &integer1); /*read an integer*/
    
    printf("Enter second integer\n"); /*prompt*/
    scanf("%d", &integer2); /*read an integer*/
    
    sum = integer1 + integer2; /*assign total*/
    
    printf("Sum is %d\n", sum); /*print sum*/
    
    return 0; /*indicate that the program ended successfully*/
} /*end function main */
