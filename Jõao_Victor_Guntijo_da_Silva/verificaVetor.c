/**
 * @autor João Victor
 * @date 27/02/2019
 * @version 1.0
 * Esse pograma recebe um vetor e indica se o pon está na origem de um grafico, 
 * em algum eixo ou em algum quadrante
 */
#include <stdlib.h>
#include <stdio.h>

int main(){
    float x, y;

    printf("Indique o X e o Y: ");
    scanf("%f %f", &x, &y);

    if((x>0)&&(y>0)){
        printf("Esta no primeiro quadrante\n\n");
    }else{
        if((x<0)&&(y>0)){
            printf("Esta no segundo quadrante\n\n");
        }else{
            if((x<0)&&(y<0)){
                printf("Esta no terceiro quadrante\n\n");
            }else{
                if((x>0)&&(y<0)){
                    printf("Esta no quarto quadrante\n\n");
                }else{
                    if((x!=0)&&(y==0)){
                        printf("o vetor esta no eixo das abcissas\n\n");
                    }else{
                        if((x==0)&&(y!=0)){
                            printf("o vetor esta no eixo das oordenadas\n\n");
                        }else{
                            if((x==0)&&(y==0)){
                                printf("o vetor esta no ponto de origem\n\n");
                            }
                        }
                    }
                }
            }
        }
    }

return(0);
}