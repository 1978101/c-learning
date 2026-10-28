#include <stdio.h>
int main()
{
    int answer=10;
    int guess;
    printf("猜一个数字（1-10）：");
    while(guess!=answer)//这里如果写的是!=前面没有给guess赋初始值，可以会遇到随机值直接正确的情况。
    {                   //可以将while里的条件改成永远正确的，然后靠break跳出循环。
        scanf("%d",&guess);
        if(guess>10)
        {
            printf("大了！\n");
            printf("继续");
        }
        else if(guess<10)
        {
            printf("小了！\n");
            printf("继续");
        }
        else
        {
            printf("猜对了！");
            break;
        }
    }
}