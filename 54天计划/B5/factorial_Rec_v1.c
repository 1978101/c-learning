#include <stdio.h>
int fact(int n);
int main(void)
{
    int n=0;
    printf("你要几的阶乘：");
    scanf("%d",&n);
    
    int result=fact(n);
    printf("result is %d",result);
    
    return 0;
}
int fact(int n)
{
    if(n<=1)                //如果是n==1，输入0没有任何输出。
    {
        return 1;
    }

    return n*fact(n-1);
}