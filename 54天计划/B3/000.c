#include <stdio.h>      //三数排列
int f(int x,int y)
{
    if(x>y)
    {
        return x;
    }
    else
    {
        return y;
    }
}
int ff(int x,int y,int z)
{
    return f(f(x,y),z);
}
int main(){
    int x=0,y=0,z=0;                            //以后只要不是全局变量都要给我赋初值
    printf("请输入三个数字比大小（x y z）：");
    scanf("%d %d %d",&x,&y,&z);
    printf("最大的数是：%d",ff(x,y,z));
    return 0;
}