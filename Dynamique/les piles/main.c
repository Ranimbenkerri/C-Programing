#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Element {
    int nombre;
    struct Element *suivant;
}Element;
typedef struct Pile {
   struct Element *premier;
}Pile;

Pile *initialiser(){
Pile *L = malloc(sizeof(*L));
L->premier=NULL;

}
void empiler(Pile *pile, int nvNombre)
{
    Element *nouveau = malloc(sizeof(*nouveau));
    if (pile == NULL || nouveau == NULL)
    {
        exit(EXIT_FAILURE);
    }

    nouveau->nombre = nvNombre;
    nouveau->suivant = pile->premier;
    pile->premier = nouveau;
}
int depiler(Pile *pile){

    int nombreDepile = 0;
    Element *elementDepile = pile->premier;

    if (pile == NULL)
    {
        exit(EXIT_FAILURE);
    }

    nombreDepile = elementDepile->nombre;
    pile->premier = elementDepile->suivant;
    free(elementDepile);

}
void est_vide(Pile *pile){

  if (pile == NULL){
    printf("La pile est vide ");

  }else{
    printf("La pile n'est pas vide");
  }

}
int sommet(Pile *pile){
    int sommmet;
    sommmet = pile->premier->nombre;
    return sommmet;
}

void afficherPile(Pile *pile)
{
    if (pile == NULL)
    {
        exit(EXIT_FAILURE);
    }
    Element *actuel = pile->premier;

    while (actuel != NULL)
    {
        printf("%d\n", actuel->nombre);
        actuel = actuel->suivant;
    }

    printf("\n");
}

    int main()
{
Pile *maPile;
    maPile = initialiser();


    empiler(maPile, 4);
    empiler(maPile, 8);
    empiler(maPile, 15);
    empiler(maPile, 16);
    empiler(maPile, 23);
    empiler(maPile, 42);

    printf("\nEtat de la pile :\n");
    afficherPile(maPile);

    depiler(maPile);
    depiler(maPile);
    printf("\nEtat de la pile :\n");
    afficherPile(maPile);
    est_vide(maPile);
    printf("\nla sommet est : %d",sommet(maPile));
    printf("hello");
    return 0;
}




