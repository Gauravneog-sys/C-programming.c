#include<stdio.h>
int main(){
    float A,M,F;
    printf("applied stress(MPa):");
    scanf("%f",&A);
    printf("material yiled strength:");
    scanf("%f",&M);
    F=M/A;
    printf("factor of safety=%f",F);
    if(F>2.0)
    {
        printf("\nsafe design");

    }
    else if (F>1.5 && F<2.0)
    {
        printf("\nacceptable with monitoring");
    }
    else
    {
        printf("\nDANGER-redesign needed");
    }
    return 0;
    
    
}