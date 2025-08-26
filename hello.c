#include <stdio.h> //é a biblioteca que permite o uso do printf

int main () {
    int idade; //declaração de variáveis 

    idade = 23; //foi atribuido o valor 23 a variável idade | ou pode ser colocado na frente da variável idade caso eu não vá fazer o uso dessa variável agora 
    
    printf("Olá Mundo!!!\n"); //printf permite que os caracteres entre ("") apareçam na tela
    printf("Idade: %d\n", idade); // \n indica quebra de linha 
    return 0;
}