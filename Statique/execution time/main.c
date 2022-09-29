#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 void pressEnter(){
     float t;
     t=clock();
     getchar();
     t=clock()-t;
     t=t/CLOCKS_PER_SEC;
     printf(" execution time : %.3f s",t);
 }
 int main(){
     pressEnter();
     return 0;


 }

