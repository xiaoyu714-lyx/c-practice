#include<stdio.h>
int main()
{   
    int size=0;
    char ch[26];
    for(ch[0]='a';size<26;size++)
    {
        printf("%c ",ch[size]);
        ch[size+1]=ch[size]+1;
    }

    return 0;
}