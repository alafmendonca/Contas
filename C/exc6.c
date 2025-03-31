//Exercício 6: Crie uma struct Personagem com os atributos nome (string), caracteristicas (string). Crie um array com dados de pelo menos três personagens da Turma da Mônica e exiba os nomes e características de cada um.


#include <stdio.h>
#include <string.h>

struct Personagem {
    char nome[50];
    char caracteristicas[100];
};

int main() {
    struct Personagem personagens[3] = {
        {"Mônica", "Dona da rua e forte"},
        {"Cebolinha", "Troca o 'R' pelo 'L' e tem cabelos espetados"},
        {"Cascão", "Tem medo de água e adora futebol"}
    };

    for (int i = 0; i < 3; i++) {
        printf("\nNome: %s\n", personagens[i].nome);
        printf("Características: %s\n", personagens[i].caracteristicas);
    }

    return 0;
}