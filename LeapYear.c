//被4整除的年份是闰年，但是00结尾的年份被400整除才是闰年。
//2018/11/14 更新
#include <stdio.h>
int main()
{
    int year,a;
    printf("��������ݣ�\n");
    scanf("%d",&year);
    if(year%400==0)
        a=1;
    else
    {
        if(year%4==0&&year%100!=0)
            a=1;
        else
            a=0;
    }
    if(a==1)
    {
        printf("%d ����������\n",year);
    }
    else
    {
        printf("%d ���겻������\n",year);
    }
    return 0;
}
