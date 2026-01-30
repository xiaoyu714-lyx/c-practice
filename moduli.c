//求模运算
#include<stdio.h>
int main()
{
    int divisor,dividend,remain;

    printf("This program computes moduli.\n");
    printf("Enter an integer to serve as the second operand:");
    scanf("%d",&divisor);
    printf("Now enter the first operand:");
    scanf("%d",&dividend);   //scanf()函数不要忘记&

    printf("%d %% %d = %d",dividend,divisor,dividend % divisor);
    while (dividend>0)
    {
        printf("\nEnter the next number for first operand(<=0 to quit):");
        scanf("%d",&dividend);
        if (dividend<=0)
        {
            printf("\nDone!");
            break;
        }
        
        printf("%d %% %d = %d",dividend,divisor,dividend % divisor);
    }

    return 0;
}