#include<stdio.h>
int main(){
    float A,F;
    printf("vibration amplitude(mm):");
    scanf("%f",&A);
    printf("frequency(hz):");
    scanf("%f",&F);
    if(A>0.5 && F>20 && F<50)
    {
        printf("high risk");
    }
    else if(A>0.5 && F>60)
    {
        printf("medium risk");
    }
    else
    {
        printf("low risk");
    }
    return 0;
}