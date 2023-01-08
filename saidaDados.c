#include <stdio.h>

int main()
{
    printf("Bom dia");   // sem quebra de linha
    printf("Boa noite"); 
    
    printf("Bom dia\n");  // \n faz a quebra de linha
    printf("Boa noite\n");

    int x, y;
    x = 10;
    y = 20;
    
    printf("%d\n", x); // printando inteiro
    printf("%d\n", y); 
    
    double z;           // printando um double 
    z = 2.3456;
    
    printf("%.2lf\n", z); // .2lf para formatar o numero de casas decimais

    int idade;
    double salario;
    char nome[50];
    char sexo;
    idade = 32;
    salario = 4560.9;
    strcpy(nome, "Maria Silva");
    sexo = 'F';
    
    printf("A funcionaria %s, sexo %c, ganha %.2lf e tem %d anos\n", nome, sexo, salario, idade); 
    
    return 0;
}