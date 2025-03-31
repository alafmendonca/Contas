//Exercício 2: Utilize a struct Personagem definida no exercício anterior. Crie um array de structs para armazenar informações de três personagens de Star Wars (por exemplo, Luke Skywalker, Darth Vader e Yoda) e imprima os dados de cada personagem.

#include <stdio.h>
#include <string.h>

struct Personagem {
    char nome[50];
    char lado[10]; // "Luz" ou "Sombra"
    int forca;
};

int main() {
    struct Personagem personagens[3];

    // Definição dos personagens
    strcpy(personagens[0].nome, "Anakin");
    strcpy(personagens[0].lado, "Luz");
    personagens[0].forca = 85;

    strcpy(personagens[1].nome, "Obi-Wan");
    strcpy(personagens[1].lado, "Luz");
    personagens[1].forca = 9;

    strcpy(personagens[2].nome, "Yoda");
    strcpy(personagens[2].lado, "Luz");
    personagens[2].forca = 100;

    // Exibindo os dados
    for (int i = 0; i < 3; i++) {
        printf("\nPersonagem %d:\n", i + 1);
        printf("Nome: %s\n", personagens[i].nome);
        printf("Lado: %s\n", personagens[i].lado);
        printf("Força: %d\n", personagens[i].forca);
    }

    return 0;
}