#include <stdio.h>
int sum(int n);
int main(void)
{
    int n=1;
    printf("请输入一个数，求它的各位之和。\n");
    printf("请输入：");
    scanf("%d",&n);
    printf("%d的各位之和是%d",n,sum(n));
    return 0;
}
int sum(int n)
{
    if(n<10)
    {
        return n;
    }
    return n%10+sum(n/10);
}