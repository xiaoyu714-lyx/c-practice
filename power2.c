//计算整数次幂
#include<stdio.h>
int main()
{
    float num,all;
    int pow,p;

    printf("Enter a number and the positive integer power to which\nthe number will be raised.\
Enter q to quit.\n");
    while (2==scanf("%f%d",&num,&pow))
    {   
        p=pow;
        for(all=1;p>0;p--)
            all*=num;
        printf("%f to the power %d is %f.\n",num,pow,all);
        printf("Enter next pair of numbers or q to quit.\n");
    }
    printf("Hope you enjoyed this power trip--bye!");

    return 0;

}