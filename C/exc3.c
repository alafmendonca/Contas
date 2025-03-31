//Exercício 3: Defina uma struct PersonagemGOT com os atributos nome (string), familia (string), titulo (string). Implemente uma função que receba uma variável do tipo PersonagemGOT como argumento e exiba suas informações. No main(), declare e inicialize uma struct com dados de um personagem (por exemplo, Jon Snow) e chame a função.

#include <stdio.h>
#include <string.h>

struct PersonagemGOT {
    char nome[50];
    char familia[50];
    char titulo[50];
};

void exibirPersonagem(struct PersonagemGOT p) {
    printf("Nome: %s\n", p.nome);
    printf("Família: %s\n", p.familia);
    printf("Título: %s\n", p.titulo);
}

int main() {
    struct PersonagemGOT personagem = {"Tyrion", "Lannister", "Mão do Rei"};
    
    exibirPersonagem(personagem);

    return 0;
}