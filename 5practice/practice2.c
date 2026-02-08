#include<stdio.h>
int main()
{
    int num;
    int times=11;

    scanf("%d",&num);
    while (times-->0)
        printf("%d ",num++);
    
    return 0;
}