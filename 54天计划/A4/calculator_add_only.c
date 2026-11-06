#include <stdio.h>
int main()
{
    float a,b;
    char c;
    printf("输入式子：");
    scanf("%f %c %f",&a,&c,&b);
    if(c=='+')
    {
        printf("%f%c%f=%f",a,c,b,a+b);
    }
    return 0;
}