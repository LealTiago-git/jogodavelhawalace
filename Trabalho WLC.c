// Incluir bibliotecas a partir da diretiva de pré-processamento �#include� ->

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

// Protótipo das funções ->

int menu(void);      // Função referente ao MENU DO JOGO.
int modo_jogo(void); // Função referente ao MODO DE JOGO.

// Início do programa ->

int main()
{

    setlocale(LC_ALL, "Portuguese"); // Determina a localidade para adaptar o código ás particularidades linguísticas da região.

    // Menu ->

    int resultado_menu; // Armazenar o valor que será retornado pela função �menu()�.

    resultado_menu = menu(); // Armazenando o valor retornado.

    system("cls");

    // Seção referente à opção escolhida pelo usuário ->

    switch (resultado_menu)
    {

    case 1:

    {

        int resultado_modo_jogo; // Armazenar o valor que será retornado pela função �modo_jogo()�.

        resultado_modo_jogo = modo_jogo(); // Armazenando o valor retornado.

        system("cls");
    }

    break;

    case 2:

        break;

    default:
        break;
    }

    return 0;
}

/*
 * Seção que contém o corpo das funções ->
 */

int menu(void)
{

    // Cabeçalho MENU ->

    printf("|=========================| \n");
    printf("|#    ---------------    #| \n");
    printf("|#    *JOGO DA VELHA*    #| \n");
    printf("|#    ---------------    #| \n");
    printf("|=========================| \n\n");

    // Opções do MENU ->

    int escolha_opcoes_menu; // A variável vai armazenar o valor referente a escolha do usuário.

    printf("|===============| \n");
    printf("|Start Game:   1| \n");
    printf("|---------------| \n");
    printf("|Credits:      2| \n");
    printf("|---------------| \n");
    printf("|Exit:         3| \n");
    printf("|===============| \n");

    printf("\nQual opção você deseja acessar? ");
    scanf("%d", &escolha_opcoes_menu);

    return escolha_opcoes_menu; // Retornar a opção escolhida.
}

int modo_jogo(void)
{

    // Cabeçalho MODO DE JOGO ->

    printf("|==========================| \n");
    printf("|#     --------------     #| \n");
    printf("|#     *MODO DE JOGO*     #| \n");
    printf("|#     --------------     #| \n");
    printf("|==========================| \n\n");

    // Opções MODO DE JOGO ->

    int opcoes_modo_jogo; // A variável vai armazenar o valor referente ao modo de jogo escolhido pelo usuário.

    printf("|======================| \n");
    printf("|Player VS Máquina:   1| \n");
    printf("|----------------------| \n");
    printf("|Multiplayer:         2| \n");
    printf("|======================| \n");

    printf("\nQual modo você deseja jogar? ");
    scanf("%d", &opcoes_modo_jogo);

    return opcoes_modo_jogo; // Retornar a opção escolhida.
}