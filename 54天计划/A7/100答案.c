#include <stdio.h>
int main()
{
    int x, y;
    printf("你想判断哪个范围里的素数？\n");
    printf("请输入（x-y):");
    scanf("%d-%d", &x, &y);
    
    // 1. 处理边界情况
    if (x < 1) {
        printf("请输入大于等于1的正整数\n");
        return 0; // 直接结束程序
    }
    if (x == 1) {
        x = 2; // 1 不是素数，直接从 2 开始判断
    }

    // 2. 外层循环：遍历 x 到 y 的每一个数
    for (int n = x; n <= y; n++) {
        
        int isprime = 1; // 【关键】：每次判断一个新数字，都要重置标志位为 1（默认是素数）
        
        // 3. 内层循环：判断 n 是不是素数
        for (int m = 2; m < n; m++) {
            if (n % m == 0) {
                isprime = 0; // 发现能整除，说明不是素数
                break;       // 【关键】：直接跳出内层循环，不用再往下试了
            }
        }
        
        // 4. 输出结果：内层循环彻底结束后，看标志位
        if (isprime == 1) {
            printf("%d ", n); // 把是素数的数字打印出来，加个空格隔开
        }
    }
    
    printf("\n"); // 最后换个行，美观
    return 0;
}