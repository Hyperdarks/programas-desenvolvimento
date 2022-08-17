/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.


RA= 12522169827
Nome= Felipe Guilherme Silva
Anhembi Morumbi Paulista - Sistemas de informação
Objetivo: Criar um sistema que mostre o valor do imc(indice de massa corporal) para aferir se alguém está com o peso
normal ou nao


*******************************************************************************/
#include <stdio.h>
#include <math.h>
int main(){
    float imc,peso,altura;
    
    printf("Digite o peso\n> ");
    scanf("%f",&peso);
    printf("Digite a altura em metros utilizando ponto, não virgula\n> ");
    scanf("%f",&altura);
    
    altura = pow(altura,2);
    imc = peso/altura;
    
    printf("O valor do imc é: %.2f",imc);
    
    if (imc<18) printf(" Voce esta abaixo do peso.");
    else if (imc<=25) printf(" Voce esta com o peso normal.");
    else if (imc<=30) printf(" Voce esta com sobrepeso.");
    else  printf(" Voce esta obeso.");
}

