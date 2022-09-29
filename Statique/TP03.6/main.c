#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,t,i,j,m;
    printf("entre le nombre tu vas convertir vers decimal ");
    scanf("%d",&n);
    int k=0;
    int s=0;
    t=n;
    while(t!=0){
        t=t/10;
        k++;
    }
    m=n;
    for(i=0;i<k;i++){
        j=m%10;
        m=m/10;
        s=s+j*pow(2,i);
        }
    printf(" N en decimal est : %d ",s);


}
