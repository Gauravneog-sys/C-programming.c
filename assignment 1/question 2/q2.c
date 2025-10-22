#include<stdio.h>  //standard input output header file decleration
int main()    //main function starts
{
     int num;    //integer type variable 'num' is declared
     printf("\n ENTER THE NUMBER = ");    //
     scanf("%d",&num);
     if(num>0)
     {
       printf("\n THE ENTERED VALUE IS POSITIVE ");
     }
     else if(num<0)
     {
             printf("\n THE ENTERED VALUE IS NEGATIVE");
     }
     else 
        
             printf("\n THE ENTERED VALUE IS 0(ZERO)");   


      
    

     return 0;
}