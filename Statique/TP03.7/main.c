#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{    int n,a,l,s;

    printf("veuillez entrer la valeur de N : \n");
    scanf("%d",&n);
    printf(" les nombres premier qui divise N sont : \n ");
    int i;

    int j;
    for(i=2;i<=(n/2);i++){
    a=n%i;

    if(a==0){
        bool k=true;
        for(j=2;j<=(i/2);j++){
            if(i%j==0){

                k=false;
                break;

            }

        }
        if(k==true){
        printf(" --- %d --- \n ",i);
    }
    }
    }


    return 0;
}
