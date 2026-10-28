#include <stdio.h>

int main() {
    int x, y;
    printf("你想要几到几的乘法表？请输入:x-y\n");
    scanf("%d-%d", &x, &y);
    
    // 外层循环：从小往大排，让 2*2 开头
    for (int j = x; j <= 9; j++) {
        
        // 内层循环：加上 && i <= j，用来代替 if
        for (int i = x; i <= y && i <= j; i++) {
            printf("%d*%d=%d\t", i, j, i * j);
        }
        
        printf("\n"); // 每一行结束换行
    }
    return 0;
}