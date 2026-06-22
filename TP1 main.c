#include <stdio.h>
 int main() {
    int T[5] = {4,5,2,7,9};
    int i,j,min,temp;
     for (i=0 ; i < 4 ; i++){
        min=i;
        for (j=i+1;j<5;j++){
        if(T[j]<T[min]) {
            min = j;

        }
     }
     if (min ! = i){
        temp = T[i];
        T[i] = T[min];
        T[min]=temp;
     }
     }
     printf("tableu de tri par selection");
     for (i=0;i<5;i++){
        printf("%d",T[i]);
     }
     return 0;
 }