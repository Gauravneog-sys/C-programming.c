#include<stdio.h>
int main(){

    char c;
    printf("enter the character:");
    scanf("%c",&c);
    if(c>=65 && c<=90)
       { printf("IT IS UPPER CASE ");}

    else if(c>= 97 && c<=122)
       { printf("IT IS LOWER CASE");}

    
    return 0;

}