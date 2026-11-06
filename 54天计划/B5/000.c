#include <stdio.h>
int fact(int n);
int main(void)
{
    int n=0;
    printf("几的阶乘？：");
    scanf("%d",&n);
    int fact(n);
}
int fact(int n)
{
    int i=1;
    for(int ii=2;ii<=n;ii++)
    {
        i=i*ii;
    }
    return i;
}
//这是第一版，出现了警告，但是我自己找不出来。
//D:\C\Learning outcomes\Դ��\54��ƻ�\B5\000.c: In function 'main':
//D:\C\Learning outcomes\Դ��\54��ƻ�\B5\000.c:8:5: warning: parameter names (without types) in function declaration
//     int fact(n);
//     ^~~