#include<stdio.h>

int main()
{
    int i = 97;
    do
    {
        printf("%c ",i);
        i+=4;
        continue;
    }while (i <= 122);

    return 0;
}