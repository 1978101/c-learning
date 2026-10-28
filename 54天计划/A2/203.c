#include <stdio.h>
int main(){
    int a,b,c,d;
    printf("请输入三个数：");
    scanf("%d %d %d",&a,&b,&c);
    if(a==b||b==c||a==c){
        printf("不要输入相等的数字！");//学了一个新语法||就是or的意思，用在条件判断里
    }
    else{
        if(a>b){
        d=b;b=a;a=d;d=0;
    }
    if(a>c){
        d=c;c=a;a=d;d=0;
    }
    if(b>c){
        d=b;b=c;c=d;
    }
    printf("%d<%d<%d",a,b,c);
    }
    return 0;
}