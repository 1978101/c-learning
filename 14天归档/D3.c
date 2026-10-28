#include <stdio.h>
int main()
{
    int a = 12; 
    int b = 10;
    printf("%d+%d=%d\n",a,b,a+b);
    printf("%d-%d=%d\n",a,b,a-b);
    printf("%d*%d=%d\n",a,b,a*b);
    printf("%d/%d=%d\n",a,b,a/b);//如果用%d就会发现小数部分被省略掉了，现在我尝试用float和%f来写
    return 0;
}