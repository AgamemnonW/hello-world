//è¢«4æ•´é™¤çš„å¹´ä»½æ˜¯é—°å¹´ï¼Œä½†æ˜¯00ç»“å°¾çš„å¹´ä»½è¢«400æ•´é™¤æ‰æ˜¯é—°å¹´ã€‚
//2018/11/14 æ›´æ–°
#include <stdio.h>
int main()
{
    int year,a;
    printf("ÇëÊäÈËÄê·İ£º\n");
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
        printf("%d ´ËÄêÊÇÈòÄê\n",year);
    }
    else
    {
        printf("%d ´ËÄê²»ÊÇÈòÄê\n",year);
    }
    return 0;
}
