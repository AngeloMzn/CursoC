#include <stdio.h>
#include <string.h>
int main() 
{
    int idade;
    double salario, altura;
    char genero;
    char nome[50];
    
    idade = 20;
    salario = 5800.5;
    altura = 1.63;
    genero = 'F';
    strcpy(nome, "Maria Silva");  // nao existe o tipo string em c, em função disso é necessario usar a biblioteca string e o comando strcpy()
    
    printf("IDADE = %d\n", idade);
    printf("SALARIO = %.2lf\n", salario);
    printf("ALTURA = %.2lf\n", altura);
    printf("GENERO = %c\n", genero);
    printf("NOME = %s\n", nome);
    
    return 0;
} 