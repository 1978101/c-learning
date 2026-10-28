#include <stdio.h>
int main(){
    int x,y;
    printf("你想要几的乘法表？请输入：");
    scanf("%d",&x);
    for(y=1;y<=9;y++){
        printf("%d*%d=%d\n",y,x,x*y);
    }
    return 0;
}