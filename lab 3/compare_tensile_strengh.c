
#include<stdio.h>
int main(){
    int a,b,result;
    printf("enter tensile strenth of a:");
    scanf("%d",&a);
    printf("enter tensile strenth of b:");
    scanf("%d",&b);
    if(a>b){
        printf("larger is:%d",a);
    } else if(b>a){
        printf("larger is:%d",b);
    } else if(a==b){
        printf("both are equal");
    }
    return 0;
}



