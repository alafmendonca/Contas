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