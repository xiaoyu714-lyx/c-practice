#include<stdio.h>
int main()
{
    int times,i,sum;
    i=0;
    sum=0;

    printf("Enter days:");
    scanf("%d",&times);
    printf("the sum of money in %d days is: ", times);
    
    while (times-->0)
    {
        i=i+1;
        sum=sum+i;
    }
    printf("%d\n",sum);

    return 0;
}