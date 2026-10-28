#include <stdio.h>
int main(){
    int a,b,c,d;
    printf("请输入三个数：");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){
        d=b;b=a;a=d;d=0;//d作为临时变量，每次转换后应该不存实际有用的值
    }
    if(a>c){
        d=c;c=a;a=d;d=0;
    }
    if(b>c){
        d=b;b=c;c=d;
    }
    if(a==b||b==c){
        if(a==b && b==c){
        printf("%d=%d=%d\n",a,b,c);
    }
        else if(a==b){
        printf("%d=%d<%d\n",a,b,c);
    }
        else if(b==c){
        printf("%d<%d=%d\n",a,b,c);
    }
        
    }else{
        printf("%d<%d<%d",a,b,c);
    }
    return 0;
}