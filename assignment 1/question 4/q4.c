#include<stdio.h>   
int main()
{
    int unit,total;
    printf("\n ENTER UNITS CONSUMED = ");
    scanf("%d",&unit);
    if(unit<=100)
    {
        total=unit*1.5;
        printf("\n TOTAL BILL = %d",total);
    }
    else if(unit>100 && unit<=200)
    {
        total=unit*2;
        printf("\nTOTAL BILL = %d ",total);
    }
    else if(unit>200 && unit<=300)
    {
        total=unit*3;
        printf("TOTAL BILL =%d",total);
    }
    else
    {
        total=unit*5;
        printf("TOTAL BILL=%d",total);
    }
}