#include <stdio.h>

int main(void) {
    
    int amount_money, dollar_bill;
    printf("Enter a dollar amount: ");
    scanf("%d", &amount_money);
    
    /* Number of $20 dollar bills, integer numbers */ 
    
    dollar_bill = amount_money / 20; 
    printf("\n$20 bills: %d", dollar_bill);
    
    int remaining;
    remaining = dollar_bill * 20;
    amount_money = amount_money - remaining;
    
    /* Number of $10 bills, integer numbers */
    
    dollar_bill = amount_money / 10;
    printf("\n$10 bills: %d", dollar_bill);
    
    amount_money = amount_money - (dollar_bill * 10);
    
    /* Number of $5 bills, integer numbers */
    dollar_bill = amount_money / 5;
    printf("\n$5 bills: %d", dollar_bill);

    amount_money = amount_money - (dollar_bill * 5);

    /* Number of $1 bills, integer numbers */

    dollar_bill = amount_money / 1;
    printf("\n$1 bills: %d", dollar_bill);

    amount_money = amount_money - (dollar_bill * 1); 
    
    return 0;
}