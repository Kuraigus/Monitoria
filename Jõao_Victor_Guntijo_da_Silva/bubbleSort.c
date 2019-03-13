#include<stdio.h>
#include<stdlib.h>
#define max 20
int p[20] = {1,3,2,5,4,6,8,9,7,10,12,11,15,14,16,13,18,17,20,19};

int main(void){

    int aux;
    for(int i = 0; i < max; i++){
        for(int j=i+1; j < max;j++){
            if(p[i]<p[j]){
                aux = p[j];
                p[j] = p[i];
                p[i] = aux;
            }
        }
    }
    for(int i = 0; i < max; i++){
        printf(" %d",p[i]);
    }
    printf("\n");
    return(0);
}