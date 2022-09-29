#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct node
{
     int key;
    struct node *left;
    struct node *right;
} node ;
node *initialiser(){
node *Node = malloc(sizeof(*Node));
Node = NULL;

}
node *Cree_elmnt( int key){

 node *elem = malloc(sizeof(*elem));
    elem->key = key;
    elem->left = NULL;
    elem->right = NULL;
return elem;
}
bool est_vide(node *Node){
    if(Node == NULL){
        return true;
    }else{
        return false;
    }
}
void affichage(node *Node){

    if (Node != NULL){
        affichage(Node->left);
        printf("- %d -",Node->key);
        affichage(Node->right);

    }
}
int main()
{
    node *myNode;
myNode = initialiser();
node *e1 = Cree_elmnt(10);
node *e2 = Cree_elmnt(8);
node *e3 = Cree_elmnt(12);

e1->left = e2;
e1->right = e3;
myNode = e1;
affichage(myNode);

    return 0;
}
