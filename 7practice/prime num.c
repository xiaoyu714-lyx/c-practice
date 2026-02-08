//找约数和素数
#include<stdio.h>
#include<stdbool.h>  //bool数测试
int main()
{
    unsigned long num;  //待测试的数
    unsigned long div;  //可能的约数
    bool isprime;  //素数标记

    printf("Please enter an integer for analysis;");
    printf("Enter q to quit.\n");
    while (scanf("%lu",&num))   //有花括号就别加分号  保证程序持续运行，用户可持续输入
    {
        for(div=2,isprime=true;(div*div)<=num;div++)   //isprime   不是素数则进入程序流，求约数
        {
            if(num%div==0)   //如果div是约数，则打印结果
            {
                if((div*div)!=num)
                    printf("%lu is divisible by %lu and %lu.\n",num,div,num/div);
                else
                    printf("%lu is divisible by %lu.\n",num,div);
                isprime=false;    //num不是素数  isprime为假
            }    
        }
        if(isprime)
            printf("%lu is prime.\n",num);
        printf("Please erter another integer for analysis;");
        printf("Enter q to quit.\n");
    }
    printf("Bye.");

    return 0; 
}