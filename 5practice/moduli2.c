//求模运算
#include<stdio.h>
int main()
{
    int divisor,dividend,remain,status;

    printf("This program computes moduli.\n");
    printf("Enter an integer to serve as the second operand:");
    scanf("%d",&divisor);
    printf("Now enter the first operand:");
    status=scanf("%d",&dividend);   //scanf()函数不要忘记&

    printf("%d %% %d = %d",dividend,divisor,dividend % divisor);
    while (status==1)     //利用scanf()的返回值来控制循环
    {
        printf("\nEnter the next number for first operand(q to quit):");
        status=scanf("%d",&dividend);    //scanf()的返回值，读取类型正确则返回1，错误则返回0
        if (status==0)
        {
            printf("Done!");
            break;
        }
        
        printf("%d %% %d = %d",dividend,divisor,dividend % divisor);
    }

    return 0;
}