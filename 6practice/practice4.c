#include<stdio.h>
int main()
{
    char ch;
    int i,times,add=0;
    for(i=0;i<6;i++)    //参数i控制打印6行
    {
        for(times=0;times<=i;times++,add++)   //参数times与i构成关系表达式，控制每行打印多少次字母
        {                                     //参数add一直递增，控制打印的字母也是一直递增的
            ch='A'+add;
            printf("%c",ch);
        }
        printf("\n");
    }
    return 0;
}