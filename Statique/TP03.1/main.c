#include <stdio.h>
#include <stdlib.h>

int main(){
int n,i,s;
float N;
printf("entre le nombre des notes \n");
scanf("%d",&n);

i=0;
s=0;

do{
printf("Entre la note %i : \n ",i+1);
scanf("%f",&N);
if(N<=0 || N>=20){
    printf("ERREUR \n");
}

i++;
if(N>10){
    s++;
}

}while(i<n);

printf("le nombre des notes qui sont suprieurs a 10 : %i",s);

















}
