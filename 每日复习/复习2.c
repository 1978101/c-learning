#include <stdio.h>
int main(){
    int a;
    printf("输入一个整数：");
    scanf("%d",&a);
    if(a%2==0){
        printf("这是偶数。");
    }
    else{
        printf("这是奇数。");
    }
    return 0;
}