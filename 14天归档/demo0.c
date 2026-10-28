#include <stdio.h>

int main()
{
    int change=0,sum=0;
    
    printf("输入支付了多少钱：");
    scanf("%d",&change);
    
    printf("输入商品价值：");
    scanf("%d",&sum);
    
    int to = change-sum;
    printf("找零:%d",to);

    
    return 0;

}