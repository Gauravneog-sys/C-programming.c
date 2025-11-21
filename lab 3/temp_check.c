#include<stdio.h>
int main(){
    int t;
    printf("enter the temparature of machine t:");
    scanf("%d", &t);
    if(t > 60 && t <= 80){
        printf("safe range\n");
    }else{
        printf("warning!!\n");
    }
    return 0;
}