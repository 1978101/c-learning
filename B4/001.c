#include <stdio.h>
int try(int a,int b)
{
    return a+b;
}
int main(){
    int a,b;
    printf("输入一个a：");
    scanf("%d",&a);
    printf("输入一个b：");
    scanf("%d",&b);
    printf("%d+%d=%d",a,b,try(a,b));
}