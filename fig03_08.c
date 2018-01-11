/*Fig. 3.8: fig08_08.c
 * Class average program with sentinel-controlled repetition*/

#include <stdio.h>

/*function main begins program execution*/
int main(void)
{
    int counter;
    int grade;
    int total;
    
    float average;
    
    total = 0;
    counter = 0;
    
    printf("Enter grade, -1 to end: ");
    scanf("%d", &grade);
    
    while(grade != -1)
    {
        total = total + grade;
        counter = counter + 1;
        
        printf("Enter grade, -1 to end: ");
        scanf("%d", &grade);
    }
    
    if(counter != 0)
    {
        average = (float) total / counter;
        
        printf("Class average is %.2f\n", average);
    }
    else
    {
        printf("No grades were entered\n");    
    }
    
    return 0;
    
}
