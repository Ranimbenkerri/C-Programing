#include <stdio.h>
#include <stdlib.h>

int main()
{   int a,b,c;
    printf("entre la valeur de a et b : \n");
    scanf("%d%d",&a,&b);


    if(b==0){
        printf(" MATHS ERREUR ");
    }

    while(a>b){
        a=a-b;

        if(a<b){
         printf(" le reste de la division : %d ",a);

         }

    }





















    return 0;
}
