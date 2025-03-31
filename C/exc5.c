//Exercício 5: Defina uma struct Colecionavel com os atributos nome (string, ex.: "Figura de Ahsoka Tano"), quantidade (inteiro). Crie uma função que receba um ponteiro para uma struct Colecionavel e incremente sua quantidade em 1. No main(), declare uma variável, chame a função e exiba o valor atualizado.

#include <stdio.h>
#include <string.h>

struct Colecionavel {
    char nome[50];
    int quantidade;
};

void incrementarQuantidade(struct Colecionavel *c) {
    c->quantidade += 1;
}

int main() {
    struct Colecionavel item = {"Figura de Ahsoka Tano", 2};

    printf("Quantidade antes: %d\n", item.quantidade);
    incrementarQuantidade(&item);
    printf("Quantidade depois: %d\n", item.quantidade);

    return 0;
}