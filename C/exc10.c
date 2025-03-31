//Exercício 10: Defina uma struct Data (dia, mês, ano). Defina uma struct PersonagemSW com os atributos nome (string), afiliacao (string, ex.: "Jedi" ou "Sith"), nivelForca (inteiro). Defina uma struct Missao que contenha titulo (string), data (struct Data), um array de structs PersonagemSW (representando a equipe da missão). Implemente funções para exibir os detalhes da missão, atualizar o nível de força de um personagem específico usando ponteiros para structs. No main(), crie uma missão interplanetária (por exemplo, uma missão inspirada em Star Wars) com pelo menos três personagens e demonstre a utilização das funções implementadas.

#include <stdio.h>
#include <string.h>

struct Data {
    int dia, mes, ano;
};

struct PersonagemSW {
    char nome[50];
    char afiliacao[20];
    int nivelForca;
};

struct Missao {
    char titulo[100];
    struct Data data;
    struct PersonagemSW equipe[3];
};

void exibirMissao(struct Missao m) {
    printf("Missão: %s\n", m.titulo);
    printf("Data: %02d/%02d/%d\n", m.data.dia, m.data.mes, m.data.ano);
    printf("Equipe:\n");
    for (int i = 0; i < 3; i++) {
        printf("- %s (%s) | Força: %d\n", m.equipe[i].nome, m.equipe[i].afiliacao, m.equipe[i].nivelForca);
    }
}

void atualizarForca(struct PersonagemSW *p, int novoNivel) {
    p->nivelForca = novoNivel;
}

int main() {
    struct Missao missao = {
        "Resgate na Estrela da Morte",
        {15, 12, 2025},
        {
            {"Luke Skywalker", "Jedi", 90},
            {"Darth Vader", "Sith", 100},
            {"Leia Organa", "Rebeldes", 80}
        }
    };

    exibirMissao(missao);

    atualizarForca(&missao.equipe[0], 95);
    printf("\nApós treinamento, nova força de %s: %d\n", missao.equipe[0].nome, missao.equipe[0].nivelForca);

    return 0;
}