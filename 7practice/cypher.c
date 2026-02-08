//cypher.c--替换输入的字母，非字母字符保持不变
#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;

    while ((ch=getchar())!='\n')
    {
        if(isalpha(ch))  //is alpha字符测试函数
            putchar(ch+1);
        else
            putchar(ch);
    }
    putchar(ch);
    
    return 0;
}