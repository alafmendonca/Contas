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


//Exercício 4: Crie uma struct Data com atributos dia, mes e ano (todos inteiros). Em seguida, crie uma struct Evento que contenha titulo (string), data (struct Data), local (string). Desenvolva um programa que declare um evento, por exemplo, o lançamento de um novo episódio de Stranger Things, e exiba seus detalhes.

#include <stdio.h>
#include <string.h>

struct Data {
    int dia;
    int mes;
    int ano;
};

struct Evento {
    char titulo[100];
    struct Data data;
    char local[100];
};

int main() {
    struct Evento evento = {"Ataque ao World Trade Center", {11, 07, 2001}, "Nova York"};

    printf("Título: %s\n", evento.titulo);
    printf("Data: %02d/%02d/%d\n", evento.data.dia, evento.data.mes, evento.data.ano);
    printf("Local: %s\n", evento.local);

    return 0;
}


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


//Exercício 7: Defina uma struct Geralt com os atributos nome (string), nivel (inteiro), experiencia (float). Implemente uma função que receba uma struct Geralt como argumento e incremente seu nível se a experiência ultrapassar um determinado valor. No main(), crie uma variável, atualize seus atributos por meio da função e exiba o resultado.

#include <stdio.h>
#include <string.h>

struct Geralt {
    char nome[50];
    int nivel;
    float experiencia;
};

void atualizarNivel(struct Geralt *g) {
    if (g->experiencia >= 100.0) {
        g->nivel += 1;
        g->experiencia = 0; // Reseta a experiência após subir de nível
    }
}

int main() {
    struct Geralt geralt = {"Geralt", 10, 105.0};

    atualizarNivel(&geralt);

    printf("Nome: %s\n", geralt.nome);
    printf("Nível: %d\n", geralt.nivel);
    printf("Experiência: %.2f\n", geralt.experiencia);

    return 0;
}


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