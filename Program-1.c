//Program to find number of digits in the input
//INPUT - 452
//OUTPUT -3

#include <stdio.h>

int main()
{
   int num;
    int count = 0;

    /* Input number from user */
    printf("Enter an integer to count the no. of digits: ");
    scanf("%d", &num);

    /* Run loop till num is greater than 0 */
    do
    {
        num=num/10;
        count++;
    } while( num > 0);

    printf("Total digits: %d", count);

    return 0;
}
