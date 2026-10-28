#include <stdio.h>
int main(){
    int score;
    printf("请输入你的成绩（1-100）：");
    scanf("%d",&score);
    if(score<0||score>100){
        printf("输入出错，请输入1-100的数字");
    }
    else{
        if(score>=95){
            printf("A+");
        }
        else if(score>=90){
            printf("A");
        }
        else if(score>=80){
            printf("B");
        }
        else if(score>=70){
            printf("C");
        }
        else if(score>=60){
            printf("D");
        }
        else{
            printf("不及格！");
        }
    }
    return 0;
}