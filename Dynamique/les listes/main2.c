#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "bib.h"


bool est_vide(Dlist L){
    if(L == NULL){
        return true;
    }
    return false;
}
/*-------------------------------------------------*/
Dlist new_Dlist(void){
    return NULL;

}
/*-------------------------------------------------*/
Dlist ajt_a_la_fin(Dlist L, int x){
   DlistN *element;

   element = malloc(sizeof( *element));
   if (element == NULL){
    printf("Erreur");
   }
   element->value = x;
   element->next = NULL;
   element->back = NULL;
   if (est_vide(L)){
    L = malloc(sizeof( *L));
    L->debut= element;
    L->fin= element;
   }else{

   L->fin->next = element;
   element->back = L->fin;
   L->fin = element;
   }
 L->length++;
 return L;

}
/*-------------------------------------------------*/
Dlist ajt_au_debut(Dlist L, int x){
     DlistN *element;
   element = malloc(sizeof( *element));
   if (element == NULL){
    printf("Erreur");
   }
   element->value = x;
   element->next = NULL;
   element->back = NULL;
   if (est_vide(L)){
    L = malloc(sizeof(*L));
    L->debut= element;
    L->fin= element;
   }else{

   L->debut->back = element;
   element->next = L->debut;
   L->debut = element;
   }
 L->length++;
 return L;

}
/*-------------------------------------------------*/
void ajout_tri(Dlist L,int val)
{bool ins=false;
DlistN *q,*p;

    q=L->debut;
    p=malloc(sizeof(*p));
    p->value=val;
    p->back=NULL;
    p->next=NULL;

while ((q!=NULL) && (ins==false))
{
    if (L->debut->value < val)
    {
        ajt_a_la_fin(L, val);
        ins=true;
    }

    else
    {
        if (q->value < val )
        {
            p->back=q->back;
            q->back->next=p;
            p->next=q;
            q->back=p;
            ins=true;
        }

        if (L->fin->value >= val)
        {
            ajt_au_debut(L,val);
            ins=true;
        }

        q=q->next;
    }
}
}
/*-------------------------------------------------*/
int counter(Dlist L)
{
DlistN *c;
int cmp=0;
c=L->debut;

while (c!=NULL)
{
    cmp++;
    c=c->next;
}
    return cmp;

}

/*-------------------------------------------------*/
Dlist supprisson_a_la_fin(Dlist L){
    if(est_vide(L)){
        printf("la liste est vide ");
        return new_Dlist();
    }
    if(L->debut == L->fin){
        free(L);
        L = NULL;
        return new_Dlist();
    }
    DlistN *temp = L->fin;
    L->fin = L->fin->back;
    L->fin->next = NULL;
    temp->next = NULL;
    temp->back = NULL;

    free(temp);
    temp =NULL;
    L->length--;
return L;
}
/*-------------------------------------------------*/
void print(Dlist L){
    if (est_vide(L)){
        printf("le liste est vide ");
    }
    DlistN *temp = L->debut;
    while(temp != NULL){

        printf("[%d]",temp->value);
        temp = temp->next;
    }
    printf("\n");
}
/*-------------------------------------------------*/
bool recherche(Dlist L, int val)
{
    bool found=false;
    DlistN *p;
    p=L->debut;

        while (p!=NULL)
        {
            if (p->value==val)
            {
                found=true;
            }

                p=p->next;

            }
            return found;
        }
/*-------------------------------------------------*/
void suppression(Dlist L, int val)
{
    DlistN *p,*q;
    p=L->debut;
    while (p->next!=NULL)
    {

       if (L->debut->value==val)
       {
           L->debut=L->debut->next;
           L->debut->back=NULL;
           free(p);
           p=L->debut;

       }
       else
       { q=p;
         p=p->next;

           if (p->value==val)
           {
             p->next->back=q;
             q->next=p->next;
             free(p);
             p=q;
           }


       }
        if (L->fin->value==val)
            {
                q=L->fin;
                L->fin=L->fin->back;
                L->fin->next=NULL;
                free(q);
            }
   }
}

/*-------------------------------------------------*/
void destruction(Dlist L)
{
    DlistN *p,*q;
    p=L->debut;

    while (p!=NULL)
    {
        q=p;
        p=p->next;
        free(q);
    }
    L->debut=p;
}
