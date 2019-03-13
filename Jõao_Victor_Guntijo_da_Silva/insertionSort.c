#include<stdio.h>
#include<stdlib.h>
#define max 20
int p[20] = {1,3,2,5,4,6,8,9,7,10,12,11,15,14,16,13,18,17,20,19};

int main(void){

    int aux;
    int atual;
    for(int i = 0; i < max; i++){
        atual = i;
        while(p[i-1]>=p[i]){
            aux = p[i];
            p[i] = p[i-1];
            p[i-1] = aux;
            i--;
        }
        i = atual;
    }
    for(int i = 0; i < max; i++){
        printf(" %d",p[i]);
    }
    printf("\n");
    return(0);
}