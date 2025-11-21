#include<stdio.h>
int main(){
    char A;
    for(char A='A';A<='Z';A++){
        if(A=='A'||A=='E'||A=='I'||A=='O'||A=='U'){
            printf("%c is vowel\n",A);
        }else{
            printf("%c is consonant\n",A);
        }
        
    }
    return 0;
}