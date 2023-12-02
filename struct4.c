#include <stdio.h>
struct dados_funcionario
{
    char nome[200];
    char admissao[200];
    char matricula[200];
    char endereco[300];
};

struct dados_cliente
{
    char nome[200];
    char nascimento[200];
    char endereco[300];
};

int main()
{
    int i;
    struct dados_funcionario funcionario[3];
    struct dados_cliente cliente[3];
    for (i = 0; i < 3; i++)
    {
        printf("       funcionario        \n");
        printf("Digite seu nome: \n");
        gets(funcionario[i].nome);
        printf("Digite sua data de adimssao: \n");
        gets(funcionario[i].admissao);
        printf("Digite seu matricula: \n");
        gets(funcionario[i].matricula);
        printf("Digite seu endereço:\n");
        gets(funcionario[i].endereco);

        printf("cliente\n");
        printf("Digite seu nome:\n");
        gets(cliente[i].nome);
        printf("Digite sua data de nascimento:\n");
        gets(cliente[i].nascimento);
        printf("Digite seu endereço:\n");
        gets(cliente[i].endereco);

        fflush(stdin);
        system("cls||clear");
    }

    for (i = 0; i < 3; i++)
    {
        printf("Nome funcionario: %s \n", funcionario[i].nome);
        printf("Admissao: %s \n", funcionario[i].admissao);
        printf("matricula: %s \n", funcionario[i].matricula);
        printf("endereço: %s \n", funcionario[i].endereco);

        printf("Nome cliente: %s \n", cliente[i].nome);
        printf("Data de nascimento: %s \n", cliente[i].nascimento);
        printf("Endereço: %s \n", cliente[i].endereco);
    }

    return 0;
}