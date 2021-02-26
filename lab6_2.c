/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(void) {
    
    int month, day, year;
    printf("Enter a date(mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);
    

    printf("\nYou entered the date: %d%.2d%.2d\n", year, month, day);
    return 0;
}