#include <stdio.h>

int main() {
    int numero;

    while (1) {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        // Verifica se o numero esta entre 1 e 2
        if (numero >= 1 && numero <= 2) {
            printf("Numero valido: %d\n", numero);
            break;  // Sai do loop se o número for válido
        } else {
            printf("Numero invalido. Por favor, digite um numero entre 1 e 2.\n");
        }
    }

    return 0;
}

