//Exercício 1: “Defina uma struct chamada Personagem que contenha os atributos nome (string), lado (string, ex.: "Luz" ou "Sombra"), forca (inteiro). Crie um programa que declare uma variável do tipo Personagem, atribua valores e exiba as informações na tela.”

#include <stdio.h>
#include <string.h>

struct Personagem {
    char nome[50];
    char lado[10]; // "Luz" ou "Sombra"
    int forca;
};

int main() {
    struct Personagem p1;

    // Atribuindo valores ao personagem
    strcpy(p1.nome, "Jeff");
    strcpy(p1.lado, "Sombra");
    p1.forca = 85;

    // Exibindo as informações
    printf("Personagem: %s\n", p1.nome);
    printf("Lado: %s\n", p1.lado);
    printf("Força: %d\n", p1.forca);

    return 0;
}