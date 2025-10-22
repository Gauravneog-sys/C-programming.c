#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the value of a :");
    scanf("%d",&a);
    printf("enter the value of b :");
    scanf("%d",&b);
    printf("enter the value of c :");
    scanf("%d",&c);
    if(a>=b && a>=c){
        printf("larger is:%d\n",a);
    }else if(b>=a && b>=c){
        printf("larger is:%d\n",b);
    }else if (c>=a && c>=b){
        printf("larger is:%d\n",c);
    }else if(a==b && b==c){
        printf("all are equal");
    }
    return 0;
    
}