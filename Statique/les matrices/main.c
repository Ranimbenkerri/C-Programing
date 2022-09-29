#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lig1;
int lig;
printf("entrez les lignes svp \n");
scanf("%d",&lig1);
lig=lig1+1;
int pascal[lig][lig];
printf(" THE pascal matrice is \n");
for(int i=0; i<lig; i++){
for(int j=0;j<lig;j++){
pascal[i][j]=9;
}
}

for(int i=0; i<lig; i++){
pascal[i][0]=1;
}
for(int i=0; i<lig; i++){
pascal[i][i]=1;
}
for(int i=1; i<lig; i++){
for(int j=1;j<lig; j++){
if(i!=j){
pascal[i][j]=pascal[i-1][j-1]+pascal[i-1][j];
}
}
}
for(int i=0; i<lig; i++){
for(int j=0;j<=i;j++){
printf("%d \t ",pascal[i][j]);
}
printf("\n");
}

}

