#include <stdio.h>
int main()
{
    int a=0,b=0;

    printf("分别输入商品价钱和付款金额：");
    scanf("%d %d",&a,&b);

    if (b<a)
    {
        int d = a-b;
        printf("金额不足，还需补%d.\n",d);
        return 0;
    }
    int c = b-a;
    printf("找零：%d\n",c);
    return 0;
}