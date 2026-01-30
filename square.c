//定义函数，计算平方
#include<stdio.h>
double square(double num);
int main()
{
    double inp_num;

    printf("Enter a number:");
    scanf("%lf",&inp_num);
    printf("the square of %f is %f",inp_num,square(inp_num));

    return 0;

}
double square(double num)   //形式参数
{
    return num*num;    //返回值
}