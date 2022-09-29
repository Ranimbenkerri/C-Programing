
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct element{
int entier;
struct element *suivant;
}element ;

typedef struct liste{
struct element *premier;
} liste ;
bool est_vide(liste *L)
{
if (L->premier==NULL){
    return true;
}
else{
    return false;
}
}

liste *Cree()
{   liste *L=malloc(sizeof(*L));
    element *E=malloc(sizeof(*E));


    E=NULL;
    L->premier=E;

return L;
}

void affichage(liste *L)
{element *Q;
Q=L->premier;
    while (Q!=NULL){
        printf("%d || ", Q->entier);
        Q=Q->suivant;
    }
printf("NULL\n\n");
}

void ajout(liste *L, int val)
{element *p;

p=malloc(sizeof(*p));
p->entier=val;
p->suivant=L->premier;
L->premier=p;

}
void moyenne(liste *L){
    element *Q;
    float cmp=0,s=0;
    float m;

        while (Q!=NULL){
         s=s+Q->entier;
        Q=Q->suivant;
        cmp++;
    }
    m=s/cmp;
    printf("%.2f",s);
    printf("\n%.2f",cmp);
   printf("la moyenne est :%.2f",m);

    }

int main()
{liste *L;

L=Cree();
ajout(L,1);
ajout(L,2);
ajout(L,3);
ajout(L,4);
ajout(L,5);
ajout(L,2);
moyenne(L);



}
