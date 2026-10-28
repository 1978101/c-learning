#include <stdio.h>
int main(){
    int a,b,c,d,e;
    printf("输入四个数字：");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a>b){
        e=a;a=b;b=e;
    }
    if(a>c){
        e=a;a=c;c=e;
    }
    if(a>d){
        e=a;a=d;d=e;
    }
    if(b>c){
        e=b;b=c;c=e;
    }
    if(b>d){
        e=b;b=d;d=e;
    }
    if(c>d){
        e=c;c=d;d=e;
    }
    printf("%d<%d<%d<%d\n",a,b,c,d);
    printf("最大的是%d\n",d);
    return 0;
}