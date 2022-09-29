#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "bib.h"

int main(void)
{
Dlist Liste = new_Dlist();
Liste = ajt_au_debut(Liste, 14);
Liste = ajt_au_debut(Liste, 13);
Liste = ajt_au_debut(Liste, 12);
Liste = ajt_au_debut(Liste, 11);
printf("affichage de la liste \n");
print(Liste);
printf("----------------------------------------------------------------------\n");
Liste = ajt_a_la_fin(Liste, 15);
printf("affichage apres l insertion a la fin \n");
print(Liste);
printf("----------------------------------------------------------------------\n");
ajout_tri(Liste, 10);
printf("affichage apres l'ajout prioritaire\n");
print(Liste);
printf("----------------------------------------------------------------------\n");
printf("Nomber des elments  %d \n",counter(Liste));
printf("Cet element existe '11' ?%s\n\n", recherche(Liste, 11) ? "\tOui" : "Non");
printf("----------------------------------------------------------------------\n");
if (est_vide(Liste)){
    printf("la liste est vide \n");


    }
    else {
        printf("la liste n'est pas vide \n");

    }
printf("----------------------------------------------------------------------\n");

suppression(Liste, 11);
printf("affichage apres suppression \n");

print(Liste);

 return 0;
}
