#include <stdio.h>
int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int divide(int a,int b);
int main(void)
{
    do
    {
        int choice=0;
        int a=0,b=0;
        printf("\n这是一个菜单\n");
        printf("————————————————\n");
        printf("1.加，2.减，3.乘，4.除，5.退出\n");
        printf("请输入：");
        scanf("%d",&choice);
        if(choice<1||choice>5)
        {
            printf("没有这个选项！");
            continue;
        }
        printf("请输入两个整数；");
        scanf("%d %d",&a,&b);
        switch(choice)
        {
            case 1:
            {
                printf("%d+%d=%d",a,b,add(a,b));
                break;
            }
            case 2:
            {
                printf("%d-%d=%d",a,b,sub(a,b));
                break;
            }
            case 3:
            {
                printf("%d×%d=%d",a,b,mul(a,b));
                break;
            }
            case 4:
            {
                int i=divide(a,b);
                if(b==0 && i==-1)
                {
                    printf("除数不能为零");
                    continue;
                }
                printf("%d÷%d=%d",a,b,divide(a,b));
                break;
            }
            case 5:
            {
                return 0;
            }
        }
    }
    while(1);
}
int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int mul(int a,int b)
{
    return a*b;
}
int divide(int a,int b)
{
    if(b==0)
    {
        return -1;
    }
    return a/b;
}