//统计字符数，单词数，行数
#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>
#define STOP '|'
int main()
{
    char c;  //读入字符
    char prev;  //读入的前一个字符
    long n_chars=0;  //字符数
    int n_lines=0;  //行数
    int n_words=0;  //单词数
    int p_lines=0;  //不完整的行数
    bool inword=false;  //如果c在单词中，则c为true  

    printf("Enter text to be analyzed('|' to quit):\n");
    prev ='\n';   //用于识别完整的行
    while((c=getchar())!=STOP)
    {
        n_chars++;   //统计字符
        if(c=='\n')
            n_lines++;  //统计行数
        if(!isspace(c) && !inword)    //检测到单词开头字母，则记为一个单词
        {
            inword=true;           //状态跟踪
            n_words++;
        }
        if(isspace(c) && inword)
            inword=false;         //状态跟踪
        prev=c;
    }
    if(prev!='\n')
        p_lines++;
    printf("character=%ld,word=%d,lines=%d,",n_chars,n_words,n_lines);
    printf("partial lines=%d\n",p_lines);

    return 0;

}