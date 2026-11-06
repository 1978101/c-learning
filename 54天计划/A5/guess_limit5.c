#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    srand(time(0));//折个要放在rand()的前面，否则在它后面运行就不是伪随机了
    int answer=rand()%100+1;//rand() % (最大值 - 最小值 + 1) + 最小值
    int guess=0;
    int count=0;
    printf("猜一个数字（1-100）：");
    while(guess!=answer)
    {
        scanf("%d",&guess);
        count++;
        if(count==5)//次数判断需要和数字正确判断不能混在一起，要分卡，否则容易出bug
        {
            printf("你用完了所有机会，正确答案是%d\n",answer);
            break;
        }
        if(guess>answer)
        {
            printf("大了！\n");
            printf("还有%d次机会\n",5-count);
            printf("继续:");
        }
        else if(guess<answer)
        {
            printf("小了！\n");
            printf("还有%d次机会\n",5-count);
            printf("继续:");
        }
        else
        {
            printf("猜对了！\n");
            printf("你用了%d次机会\n",count);
            break;
        }
        
    }
    return 0;
}