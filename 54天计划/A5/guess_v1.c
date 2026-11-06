#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    srand(time(0));
    int answer=rand()%100+1;
    int guess=0;
    printf("猜一个数字（1-100）：");
    while(guess!=answer)
    {
        scanf("%d",&guess);
        if(guess>answer)
        {
            printf("大了！\n");
            printf("继续:");
        }
        else if(guess<answer)
        {
            printf("小了！\n");
            printf("继续:");
        }
        else
        {
            printf("猜对了！");
            break;
        }
    }
    return 0;
}