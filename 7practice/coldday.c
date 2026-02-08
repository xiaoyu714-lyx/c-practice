//if语句 记录0度以下的天数的占比
#include<stdio.h>
int main()
{
    const int FREEZING=0;
    float tem;
    int cold_days=0;
    int all_days=0;

    printf("Enter the list of daily low tempertures.\n");
    printf("Use Celsius,and enter q to quit.\n");
    while(scanf("%f",&tem)==1)
    {
        all_days++;
        if(tem<FREEZING)
            cold_days++;
    }

    if (all_days!=0)
        printf("%d days total:%.1f%%were below freezing.\n",all_days,100.0*(float)cold_days/all_days);
    else
        printf("No data entered!");

    return 0;
}