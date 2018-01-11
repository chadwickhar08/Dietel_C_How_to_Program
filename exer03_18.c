/*Develop a C program that will determine if a department store
customer has exceeded the credit limit on a charge account. For each customer, the following facts
are available:
a) Account number
b) Balance at the beginning of the month
c) Total of all items charged by this customer this month
d) Total of all credits applied to this customer's account this month
e) Allowed credit limit
The program should input each of these facts, calculate the new balance (= beginning balance
+ charges – credits), and determine if the new balance exceeds the customer's credit limit. For those
customers whose credit limit is exceeded, the program should display the customer's account num-
ber, credit limit, new balance and the message “Credit limit exceeded.”
*/

#include <stdio.h>

int main(void)
{
    /*initialize the variables needed for this program*/
    int accountNumber;
    float startingBalance, totalCharges, totalCredits, creditLimit, endingBalance;
    
    /*ask the user for input*/
    printf("Enter the account number (-1 to end): ");
    scanf("%d", &accountNumber);
    
    while(accountNumber != -1)
    {
        printf("Enter beginning balance: ");
        scanf("%f", &startingBalance);
        
        printf("Enter total charges: ");
        scanf("%f", &totalCharges);
        
        printf("Enter total credits: ");
        scanf("%f", &totalCredits);
        
        printf("Enter credit limit: ");
        scanf("%f", &creditLimit);
        
        endingBalance = startingBalance + totalCredits;
        
        printf("Account: %d\n", accountNumber);
        printf("Credit Limit: %f\n", creditLimit);
        printf("Balance: %f\n", endingBalance);
        
        if(endingBalance > creditLimit)
        {
            printf("Credit Limit Exceeded.\n");
        }
        
        printf("Enter the account number (-1 to end): ");
        scanf("%d", &accountNumber);
    
        
    }
    
 
    return 0;
}
