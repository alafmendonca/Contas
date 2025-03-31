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