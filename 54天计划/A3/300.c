#include <stdio.h>
int main(){
    int a;
    printf("你多少分？输入；");
    scanf("%d",&a);
    if(a>=0 && a<=100){//&&是先判断正确范围，也可以||来判断错误的范围。
        if(a>=90){
            printf("A\n");
        }
        else if(a>=80){
            printf("B\n");
        }
        else if(a>=70){
            printf("C\n");
        }
        else if(a>=60){
            printf("D\n");
        }
        else{
            printf("不及格！\n");
        }
    }
    else{
        printf("输入出错，请输入0~100的整数\n");
    }
    return 0;
}