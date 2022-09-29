#include <stdio.h>
#include <stdlib.h>
int somme(int x){
if (x==0){
    return 0;
}else{

return somme(x-1)+x;

}

}
int puissance(int x , int n ){
if (n==0){
    return 1;

}else{
return puissance(x, (n-1)) * x;
}
}
int pgcd(int a , int b){

if (a%b==0){
    return b;
}else{
return pgcd(b, a%b);
}

}
void affiche(int n){

 if(n!=0){
   affiche(n-1);
   printf("-%d-",n);

}

}
void affiche2(int n){

if(n!=0){
    printf("-%d-",n);
    affiche2(n-1);
}
}int binaire(int x){

if((x/2)==0){
    return x%2;
}else{
    return binaire (x/2)*10 +  x%2;
}

}
void affiche_tab(int tab[5], int i){
if(i<5){
    printf("%d \t",tab[i]);
    affiche_tab(tab, i+1);
}

}
int sum(int tab[5], int i, int s ){

if(i==5){
           return s;

}
else{
        sum(tab, i+1, s+tab[i]);

}

}
int main()
{
    int tab[5];
    printf("%d",somme(10));
    printf("\n %d",puissance(2,3));
    printf("\n %d \n",pgcd(9,3));
    affiche(10);
    printf("\n");
    affiche2(10);
    printf("\n");
    printf("%d",binaire(15));
    for(int i = 0 ; i<5 ; i++){
        tab[i] = i;
    }
    printf("\n");
    affiche_tab(tab, 0);
    printf("\n%d",sum(tab, 0,0));



    return 0;
}
