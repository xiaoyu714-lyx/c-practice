//计算整数次幂
#include<stdio.h>
int main()
{
    float num,all;
    int pow,status;

    printf("Enter a number and the positive integer power.(q to quit)\n");
    for (status=1;status==1;)    //利用输入值类型不符来中断循环
    {
        printf("Enter a number:");
        status=scanf("%f",&num);
        printf("Enter the power:");
        scanf("%d",&pow);
        for(all=1;pow>0;pow--)    //利用循环来计算整数次幂
            all=all*num;
        printf("%f\n",all);
    }
    
    return 0;

}