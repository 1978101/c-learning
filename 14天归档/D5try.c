#include <stdio.h>
int main()
{
    int x;
    int y;
    for(x=1;x<=9;x++){
        for(y=1;y<=9;y++)//改这里可以让乘法表打印成完整格式
    {
        printf("%d*%d=%d\n",y,x,x*y);//\t表示水平制表符，相当于点了Tab
    }
    printf("\n");
    }
    return 0;
}
//这个是我一开始尝试写的乘法表，但是有一些错误。