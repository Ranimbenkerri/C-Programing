#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void INV (char x[5])
{
    int c,pld=1;

    c=strlen(x)-1;
    for(int i=0;i<(c/2);i++){

            if(x[i]!=x[c-i]){

             pld=0;
             break;

            }


    }
    if(pld==1){
        printf("palindrome");
    }
    else{
        printf("n est pas palindrome");
    }






}
int main(){
    char s[5];
    printf("entre un mot \n");
    gets(s);
    INV(s);


    }
