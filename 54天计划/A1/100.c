#include <stdio.h>
int main()
{
    float a;
    printf("输入一个数：\n");
    scanf("%f",&a);
    if(a < 0)
    {
        printf("这是负数");
    }
    else
    {
        printf("这是正数");
    }
    return 0;
}