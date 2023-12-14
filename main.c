#include <stdio.h>
#include <stdlib.h>
void total_ects();
void media();
void percentagem_ects();

void main()
{
    char opcoes;

    printf("\nRegistar e consultar os dados dos estudantes");
    printf("\nRegistar e consultar os dados das unidades curriculares");
    printf("\nRegistar e consultar os dados das avalia\x87\x228es");
    printf("\nEstatísticas");
    printf("\nGuardar e ler de ficheiros binários os dados da aplicação");
    printf("\nOpcao -> ");


    Estatisticas: total_ects();
                  media();
                  percentagem_ects();
}

total_ects()
{
    printf("Total de ECTS aprovados por um estudante: ");
    scanf("%d",&total_ects);
}

media()
{
    printf("Média aritmética atual das classificações nas unidades curriculares aprovadas por um estudante: ");
    scanf("%d",&media);
}

percentagem_ects()
{
    printf("Percentagem de ECTS aprovados em cada semestre letivo por um estudante: ");
    scanf("%d",&percentagem_ects);
}
