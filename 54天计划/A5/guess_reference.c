#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    srand(time(0)); // 播种放最前面
    int answer = rand() % 100 + 1; 
    int guess = 0;
    int count = 0;
    int max_chance = 5; // 把最大次数抽出来，以后想改随时改，不用满代码找

    printf("猜一个数字（1-100）：\n");
    printf("你一共有 %d 次机会。\n", max_chance);

    // 循环条件：没猜对，且次数还没用完 (count < 5)
    while (guess != answer && count < max_chance) 
    {
        scanf("%d", &guess);
        count++; // 猜了一次，次数+1

        if (guess > answer) 
        {
            printf("大了！\n");
        }
        else if (guess < answer) 
        {
            printf("小了！\n");
        }
        else 
        {
            // 猜对的情况
            printf("猜对了！你用了 %d 次机会\n", count);
            break; // 猜对了，直接结束循环
        }

        // 如果猜错了，且次数还没用完，提示剩余次数
        if (count < max_chance) 
        {
            printf("还有 %d 次机会，继续：", max_chance - count);
        }
    }

    // 重点：循环结束后，判断是因为什么退出的
    // 如果次数用光了，且 guess 依然不等于 answer（说明最后一次也没猜对）
    if (count == max_chance && guess != answer) 
    {
        printf("你用完了所有机会，正确答案是：%d\n", answer);
    }

    return 0;
}