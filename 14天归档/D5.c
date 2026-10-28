#include <stdio.h>
int main()
{
    int i;
    int a;
    printf("请输入一个整数：");
    scanf("%d",&a);
    for(i=1;i<=9;i++)
    {
        printf("%d*%d=%d\n",a,i,i*a);
    }
    return 0;
}