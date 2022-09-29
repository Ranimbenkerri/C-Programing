#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int fact(int x);
int main()
{   int n,k;

    printf("entrer un nombre entier : \n");
    scanf("%d",&n);
    int h=n;
    int s=0;

    while(n>0){
        k=n%10;
        n=n/10;
        s=s+fact(k);
        }

    if(s==h){
        printf(" N est un nombre fort ");
    }else{
        printf(" N n est pas un nombre fort  ");
}
return 0;

}
int fact(int x){
    int i=0,j=1;
    while(i<(x-1)){

        j=j*(x-i);
         i++;
        }
        return j;
}
