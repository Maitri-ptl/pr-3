#include<stdio.h>

int main()
{
    int num,digit = 0, firstDigit,lastDigit;

    printf("Enter the number: ");
    scanf("%d",&num);

    lastDigit = num % 10;

    while (num != 0)
    {
        firstDigit = num % 10;
        num /= 10;
        digit++;
    }
    printf("\n Total number of digit: %d",digit);
    printf("\n Addition is: %d",firstDigit + lastDigit);

    return 0;
}