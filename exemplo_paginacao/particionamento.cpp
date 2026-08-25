#include <stdio.h>
#include <string.h>

typedef struct
{
    unsigned int bv; // 0 = partição vazia
    char processo[5];
} particao;
particao RAM[10];

int main()
{
    int i;
    // inicializando
    for (i = 0; i < 10; i++)
        RAM[i].bv = 0;

    // alocação. Será ideal transformar em função
    for (i = 0; i < 10; i++)
        if (RAM[i].bv == 0)
        {
            printf("Digite um processo: ");
            RAM[i].bv = 1;
            scanf("%s", &RAM[i].processo);
        }

    // simulação do processador encerrando execução de processo
    strcpy(RAM[2].processo, "");
    RAM[2].bv = 0;
    printf("\n3o Processo finalizando\n");
    strcpy(RAM[8].processo, " ");
    RAM[8].bv = 0;
    printf("9o Processo finalizando\n");

    // visualização da RAM simulada. Será ideal transformar em função
    printf("\nStatus da RAM\n");
    for (i = 0; i < 10; i++)
        printf("%da Particao da RAM: [%d|%s]\n", i + 1, RAM[i].bv, RAM[i].processo);

    // NOVA alocacao
    for (i = 0; i < 10; i++)
        if (RAM[i].bv == 0)
        {
            printf("\n");
            printf("Digite um processo: ");
            RAM[i].bv = 1;
            scanf("%s", &RAM[i].processo);
        }

    // NOVA visualizacao da RAM simulada
    printf("/nStatus da RAM\n");
    for (i = 0; i < 10; i++)
        printf("%da Particao da RAM: [%d|%s]\n", i + 1, RAM[i].bv, RAM[i].processo);
    return (0);
}