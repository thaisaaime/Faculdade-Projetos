#include <stdio.h>

int main(){
    int idade = 25;
    float altura = 1.70;
    double saldoBancario = 12345.67;
    char inicial = 'T';
    char nome[20] ="Thaisa";

    printf("idade: %d anos\n" , idade);
    printf("altura: %.2f metros\n" , altura);
    printf("saldo Bancario: %2f reais\n" , saldoBancario);
    printf("inicial do Nome: %c\n" , inicial);
    printf("nome: %s\n " , nome);

    return 0;

    /*
    print ("%formato1 %formato2 %formato3", variavel1, variavel2, variavel3)

    %d: Imprime um inteiro no formato decimal
    %i: Equivale a %d
    %f: Imprime um numero de ponto flutuante no formato padrão
    %e: Imprime um numero de ponto flutuante na notação cientifica
    %c Imprime um unico caractere
    %s Imprime uma cadeia (string) de caracteres 
*/
}













