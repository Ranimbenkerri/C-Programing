#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,b;
    printf("entrer une numero positive : \n");
    scanf("%d",&n);
    b=n;
    int k=0;
    do{
        n=n/10;
        k++;
    }while(b!=0);
     printf("k= %d",k);
}