#include <stdio.h>

int main(void)
{
    int product = 3;
    
    while(product <= 100)
    {
        product = product * 3;   
    }
    
    printf("%d\n", product);
    
    return 0;   
}
