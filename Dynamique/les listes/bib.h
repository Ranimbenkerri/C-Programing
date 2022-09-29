
/* RANIM BENKERRI 1cp08 */
typedef struct DlistN{
    int value;
    struct DlistN *back;
    struct DlistN *next;

}DlistN;

typedef struct Dlist{
    int length;
    struct DlistN *debut;
    struct DlistN *fin;

}*Dlist;
bool est_vide(Dlist L);
Dlist new_Dlist(void);
Dlist ajt_a_la_fin(Dlist L, int x);
Dlist ajt_au_debut(Dlist L, int x);
void ajout_tri(Dlist L,int val);
int counter(Dlist L);
Dlist supprisson_a_la_fin(Dlist L);
void print(Dlist L);
bool recherche(Dlist L, int val);
void suppression(Dlist L, int val);
void destruction(Dlist L);

