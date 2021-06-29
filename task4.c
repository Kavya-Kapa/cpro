#include<stdio.h>
int main()
{
    int n,r,sum=0;
    printf("Input Number: ");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        n=n/10;
        sum=sum+r;
    }
    printf("Sum of digits: %d",sum);
}
