#include <stdio.h>
#include <stdlib.h>

int main()
{   int n,i,s,j,k,b;
    printf("veuillez entrer la valeur N : \n");
    scanf("%i",&n);
    i=0;
    s=0;
    n=b;
    k=0;

    while(i<=n){
    j=n%10;
    s=s+j;
    n=n/10;
    i++;
    }



    printf("la somme est : %i",s);

}
