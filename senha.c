#include <stdio.h>

int main() {
    int usuario, senha;

    printf("Codigo de usuario: ");
    scanf("%d", &usuario);
    printf("Senha: ");
    scanf("%d", &senha);

    /* continua pedindo enquanto o usuario OU a senha estiverem errados */
    while (usuario != 1234 || senha != 9999) {
        printf("\nUsuario ou senha incorretos. Tente novamente.\n");
        printf("Codigo de usuario: ");
        scanf("%d", &usuario);
        printf("Senha: ");
        scanf("%d", &senha);
    }

    printf("\nAcesso liberado! Bem-vindo!\n");
    return 0;
}
