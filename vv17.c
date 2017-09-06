
#include<stdio.h>
int main()
{
    int num,n,sum=0,temp;
    printf("Enter a number");
    scanf("%d",&num);
    temp=num;
    while(num!=0)
    {
         n=num%10;
         num=num/10;
         sum=sum+(n*n*n);
    }
    if(sum==temp)
         printf("%d is an Armstrong number",temp);
    else
         printf("%d is not an Armstrong number",temp);
    return 0;
}
