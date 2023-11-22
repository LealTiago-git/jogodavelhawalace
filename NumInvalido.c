#include <stdio.h>
#include <ctype.h>

int main() {
    int numero;
    char entrada[50];  // Usar uma string para armazenar a entrada

    while (1) {
        printf("Digite um numero: ");
        scanf("%s", entrada); //Usado para ler uma sequência de caracteres

        // Verifica se todos os caracteres da entrada são 1 ou 2
        int caracteres_validos = 1;
        for (int i = 0; entrada[i] != '\0'; i++) {      //Loop que percorre a string entrada
            if (entrada[i] != '1' && entrada[i] != '2') {       //Verifica se o numero é 1 ou 2, se não, invalída
                caracteres_validos = 0;
                break;
            }
        }

        if (caracteres_validos) {
            // Se todos os caracteres são 1 ou 2, converte a entrada para um número inteiro
            numero = atoi(entrada);
            break;  // Sai do loop se o numero for aceito
        } else {
            printf("Entrada invalida. Por favor, digite apenas os numeros 1 ou 2.\n");
        }
    }

    return 0;
}
