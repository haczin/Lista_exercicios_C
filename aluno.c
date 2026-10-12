#include <stdio.h>

struct Aluno {
    char nome[50];
    int matricula;
    float nota;
};

int main() {
    struct Aluno aluno;

    printf("Nome do aluno: ");
    scanf(" %49[^\n]", aluno.nome);   
    printf("Matricula: ");
    scanf("%d", &aluno.matricula);
    printf("Nota: ");
    scanf("%f", &aluno.nota);

    printf("\n========== FICHA CADASTRAL ==========\n");
    printf("Nome      : %s\n", aluno.nome);
    printf("Matricula : %d\n", aluno.matricula);
    printf("Nota      : %.1f\n", aluno.nota);
    printf("=====================================\n");

    return 0;
}
