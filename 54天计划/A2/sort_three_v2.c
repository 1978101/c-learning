#include <stdio.h>
int main(){
    int a,b,c,d;
    printf("输入三个数：");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){
        d=a;a=b;b=d;
    }
    if(a>c){
        d=a;a=c;c=d;
    }
    if(b>c){
        d=b;b=c;c=d;
    }
    printf("%d<%d<%d\n",a,b,c);
    printf("a最小,c最大\n");//这里又搞错了，没有%d，a的格式啊！！！！
    return 0;
}