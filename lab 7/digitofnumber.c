#include<stdio.h>
int main(){
    int a,count=0;
    printf("enter the number:");
    scanf("%d",&a);
    if(a==0){
        count=1;
    }else {
        if(a<0){
            a=-a;
        }
        while(a!=0){
            a=a/10;
            count++;
        }
    }
    printf("number of digits=%d",count);
    return 0;
}
