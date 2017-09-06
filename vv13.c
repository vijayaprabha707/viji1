#include <stdio.h>
#include <stdlib.h>
void main()
{
    int num, j, flag;
    printf("Enter a number \n");
    scanf("%d", &number);
    if (number <= 1)
    {
        printf("%d is not a prime numbers \n",number);
        exit(1);
    }
    flag = 0;
    for (j = 2; j <= number / 2; j++)
    {
        if ((number % j) == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("%d is a prime number", num);
     else
        printf("%d is not a prime number", num);
}
