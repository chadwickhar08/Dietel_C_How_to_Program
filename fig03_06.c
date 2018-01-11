/*Fig. 3.6: fig03_06.c
 * Class average program with counter-controlled repetition
 * */

#include <stdio.h>

/*function main begains program execution*/
int main(void)
{
    int counter; /*number of grade to be entered next*/
    int grade; /*grade value*/
    int total; /*sum of grades input by user*/
    int average; /*average of grades*/
    
    /*initialization phase*/
    total = 0; /*initialize loop*/
    counter = 1; /*initialize loop counter*/
    
    /*processing phase*/
    while(counter <= 10)
    {
        printf("Enter grade: ");
        scanf("%d", &grade);
        total = total + grade;
        counter = counter + 1;
        
    }
    
    /*termination phase*/
    average = total / 10;
    
    printf("Class average is %d\n", average);
    return 0;
        
}
