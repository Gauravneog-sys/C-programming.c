#include<stdio.h>
int main(){
    float j=1.0,i=2.0;int n=0;
    while(i/j>0.05){
        j+=j; n++;
    }
    printf("n=%d,j=%f\n",n,j);
    return 0;
}