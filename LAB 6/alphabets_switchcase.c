#include<stdio.h>
int main(){
    char A;
    for(char A='A';A<='Z';A++){
    switch(A){
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
          printf("%c is vowel\n",A);
          break;
        default:
         printf("%c is consonant\n",A);
         break;

    }

}
return 0;
}

