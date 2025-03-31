//Exercício 9: Utilize a struct PersonagemGOT do Exercício 3. Implemente uma função que receba um array de structs PersonagemGOT e o número de elementos, além de um nome de personagem para buscar. A função deve retornar um ponteiro para a struct correspondente ou NULL se não encontrar. No main(), teste a função preenchendo a array e pesquisando com um nome existente e outro não.

#include <stdio.h>
#include <string.h>

struct PersonagemGOT {
    char nome[50];
    char familia[50];
    char titulo[50];
};

struct PersonagemGOT* buscarPersonagem(struct PersonagemGOT personagens[], int tamanho, char *nome) {
    for (int i = 0; i < tamanho; i++) {
        if (strcmp(personagens[i].nome, nome) == 0) {
            return &personagens[i];
        }
    }
    return NULL;
}

int main() {
    struct PersonagemGOT personagens[3] = {
        {"Jon Snow", "Stark (adotivo)", "Rei do Norte"},
        {"Daenerys Targaryen", "Targaryen", "Mãe dos Dragões"},
        {"Tyrion Lannister", "Lannister", "Mão do Rei"}
    };

    struct PersonagemGOT *p = buscarPersonagem(personagens, 3, "Tyrion Lannister");

    if (p) {
        printf("Personagem encontrado: %s\n", p->nome);
    } else {
        printf("Personagem não encontrado.\n");
    }

    return 0;
}