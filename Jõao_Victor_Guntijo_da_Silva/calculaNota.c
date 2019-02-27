/**
 * @autor João Victor
 * @date 27/02/2019
 * @version 1.0
 * Esse pograma recebe varias notas de um aluno, calcula a media e classifa de acordo com a nota
 */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
    float p1, p2, ed, med;

    printf("Qual foi sua nota na P1? ");
    scanf("%f", &p1);


    printf("Qual foi sua nota na P2? ");
    scanf("%f", &p2);


    printf("Qual foi sua nota no EDAD? ");
    scanf("%f", &p1);
    
    med = (0.4 *p1) + (0.6 * (0.05 * ed + 0.95 * p2));
    
    if(med < 5){
        printf("Reprovado\n");
    }else{
        if(med >= 9){
            printf("SS\n");
        }else{
            if(med >= 7){
                printf("MS\n");
            }else{
                if(med >= 5){
                    printf("MM\n");
                }
            }
        }

    }
return(0);
}