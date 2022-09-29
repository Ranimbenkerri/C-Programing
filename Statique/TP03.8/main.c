#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    float m,a;
    float s=0;
    int i=1;
    printf(" entre 0 pour calculer la moyenne : \n");
    do{
    printf(" taper une nombre entier : \n");
    scanf("%f",&a);
    if(a<0 || a>20){
        printf("/ ERREUR / \n");
        printf(" taper une nombre entier : \n");
        scanf("%f",&a);
    }
    if(a==0){
        break;
    }
    s=s+a;
    m=s/i;
    i++;

    }while(a>0);



    printf(" la moyenne est : %.2f",m);







    }
