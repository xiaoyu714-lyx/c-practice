#include<stdio.h>
#define SIZE 26
int main()
{
    int i;
    char ch[SIZE];

    for(i=0;i<26;i++)  //存储数组元素
        ch[i]='a'+i;   //用一个递增参数来控制循环次数，且可以用来递增数组元素
    for(i=0;i<26;i++)   //打印数组元素
        printf("%c",ch[i]);

    return 0;
}