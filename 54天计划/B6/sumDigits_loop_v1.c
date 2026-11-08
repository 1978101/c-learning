#include <stdio.h>
int digits(int i);
int sumdigits(int i, int n);

int main(void)
{
    int i = 1;
    printf("请输入一个数，计算它的各位之和。\n");
    printf("请输入：");
    scanf("%d", &i);
    int n = digits(i);
    int result = sumdigits(i, n);
    printf("答案是：%d\n", result);
    return 0;
}

// digits 返回的是「最大的那个 10 的幂」，不是位数。
// 2026 -> 1000，1000 -> 1000，7 -> 10
int digits(int i)
{
    // 改动 1：条件从 i/n == 0 改成 i/n < 10
    // 原来返回第一个让 i/n 变 0 的 n，2026 会拿到 10000，多了一位。
    // 现在返回最大的那个、除下来还是一位数的 n。
    for (int n = 10; n <= 1000000000; n = n * 10)
    {
        if (i / n < 10)
        {
            return n;
        }
    }
    return 1;
}

int sumdigits(int i, int n)
{
    int i2 = 0;

    // 改动 2：n 每轮除以 10，不是减 1。
    // 1000 -> 100 -> 10 -> 1 -> 0，正好走过每一位。
    // 原来 n-- 是从 10000 一万个一万个地减，中间那些数都不是 10 的幂。
    // 开头 for(n; ...) 那个 n 是空转一句，删掉了。
    for (; n > 0; n = n / 10)
    {
        // 改动 3：n 本身就是 10 的幂，不再乘 10。
        // 原来 (i/(10*n)) 多乘了一位，取到的是上一位的数。
        int i1 = (i / n) % 10;
        i2 = i1 + i2;
    }

    return i2;
}
