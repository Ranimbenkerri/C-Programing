#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
   int s=0,lig,minp,maxp;
   float moyen = s/lig;
   int t[lig];
   int min,max;
     max=t[0];
    min=max;

    printf("entrez les lignes \n");
    scanf("%d",&lig);

    printf("Entrez the table \n");
    for(int i=0;i<lig;i++){
    scanf("%d",&t[i]);
   }

    for(int i=0;i<lig;i++){
    s=s+t[i];
   }

   printf("\nla Somme est : %d ",s);
   printf("\nla Moyen est : %.2f",moyen);

   for(int i=0;i<lig;i++){
    if(t[i]>=max){
     max=t[i];
     maxp=i;
   }
   }

   for(int i=0;i<lig;i++){
    if(t[i]<=min){
      min=t[i];
      minp=i;
    }
}
   int n;
  printf("\nLE max est t[%d]=%d ",maxp,max);
  printf("\nLE min est t[%d]=%d ",minp,min);
  printf("\nEnter the number u looking for :");
  scanf("%d",&n);
 bool ff=false;
 int pos[lig];
 int z=0;
  for(int i=0;i<lig;i++){
  if(t[i]==n){
   ff=true;
   pos[z]=i;
   z++;
  }
  }
   if(ff=true){
  printf("\nhe existe ");
   for(int i=0;i<z;i++){
  printf("\npositions is : t[%d]",pos[i]);
  }
  }
   int occurence[lig];
   int occ;
   int x=0;
   for(int i=0;i<lig;i++){
   occ=0;
  for(int j=0;j<lig;j++){
   if(t[i]==t[j]){
   occ++;
   }
    }
   occurence[x]=occ;
   x++;
   }
   for(int i=0;i<x;i++){
  printf("\nnumber occurence de %d est :%d",t[i],occurence[i]);
 }
  int ordre[lig];
  for(int i=0;i<lig;i++){
  for(int j=i+1;j<lig;j++){
  if(t[j]<t[i]){
  int temp=t[i];
    t[i]=t[j];
    t[j]=temp;
}
}
}
    for(int i=0;i<lig /2;i++){
   int temp=t[i];
      t[i]=t[lig-i-1];
t[lig-i-1]=temp;
}
for(int i=0;i<lig;i++){

printf("t[%d] = %d \t",i,t[i]);
}
}

