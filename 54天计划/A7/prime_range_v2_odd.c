//优化算法：让代码跑得更快
#include <stdio.h>
int main()
{
    int x,y;
    printf("你想判断哪个范围里的素数？\n");
    printf("请输入（x-y):");
    scanf("%d-%d",&x,&y);
    if(x<1)
    {
        printf("请输入大于等于1的正整数");
        return 0;
    }
    if (x==1) 
    {            // 1、0、负数都不是素数
        printf(" ");
    } 
    if (x<=2&&y>=1) 
    {     // 2 是唯一的偶素数，单独照顾
        printf("2 ");
    } 
    if(x<3)
    {
        x=3;
    }
    if (x%2==0) 
    { // 其他偶数一律不是
        x+=1;
    }
// 到这里 n 是大于 2 的奇数，从 3 开始只试奇数
for (int n=x;n<=y;n+=2) 
{   
    int isprime=1;
    for(int m=3;m*m<=n;m+=2)
    {
        if(n%m==0)
        {
            isprime=0;
            break;
        }
    }
    if(isprime==1)
    {
        printf("%d ",n);
    }
}
    
    printf("\n");
    return 0;
}