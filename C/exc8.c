//Exercício 8: Crie uma struct SuperHeroi com os atributos nome (string), poder (string), nivelForca (inteiro). Crie um array de structs para armazenar informações de cinco super-heróis (ex.: Homem de Ferro, Capitão América, Mulher Maravilha, Aquaman, Superman) e exiba uma lista formatada com seus dados.

#include <stdio.h>
#include <string.h>

struct SuperHeroi {
    char nome[50];
    char poder[50];
    int nivelForca;
};

int main() {
    struct SuperHeroi herois[5] = {
        {"Homem de Ferro", "Tecnologia Avançada", 90},
        {"Capitão América", "Força e Liderança", 85},
        {"Homem-Aranha", "Poderes Aracnideos e inteligência ", 80},
        {"Aquaman", "Controle sobre a água", 88},
        {"Superman", "Força e voo", 100}
    };

    for (int i = 0; i < 5; i++) {
        printf("\nNome: %s\n", herois[i].nome);
        printf("Poder: %s\n", herois[i].poder);
        printf("Nível de Força: %d\n", herois[i].nivelForca);
    }

    return 0;
}