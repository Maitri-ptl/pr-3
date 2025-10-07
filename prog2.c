#include<stdio.h>

int main()
{
    int num,digit = 0;

    printf("Enter the number: ");
    scanf("%d",&num);

    while (num != 0)
    {
        num /= 10;
        digit++;
    }
    printf("\n Total number of digit: %d",digit);
    
    return 0;
}