/**
 * @autor João Victor
 * @date 27/02/2019
 * @version 1.0
 * Esse pograma recebe varias entradas até encontrar uma nota inferior a 5
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
    char nome[100];
    float nota;
    bool ac;

    do{
        system("clear");
        printf("Insira o nome do aluno: ");
        scanf(" %s", &nome);
        printf("Insira a nota do aluno: ");
        scanf("%f", &nota);
        
        if(nota < 5){
            ac = true;
        }
        else{
            ac = false;
        }
        
    }
    while(ac != true);    

}