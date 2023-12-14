#include <stdio.h>
#include <stdlib.h>

void main()
{
    int opcao, submenu, total_ects, percentagem_ects;
    int case1 = 0, case2 = 0, case3 = 0, sair = 0;
    float media;

    printf("\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4");
    printf("\n\t\t\t\tGestao da situacao curricular dos estudantes do curso TeSP PSI");
    printf("\n\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4");
    printf("\n 1 - Registar e consultar os dados dos estudantes");
    printf("\n 2 - Registar e consultar os dados das unidades curriculares");
    printf("\n 3 - Registar e consultar os dados das avaliacoes");
    printf("\n 4 - Estatisticas");
    printf("\n 5 - Guardar e ler de ficheiros binarios os dados da aplicacao");
    printf("\n 6 - Sair");
    printf("\n\n Opcao -> ");
    scanf(" %d",&opcao);


    do{
        switch(opcao)
        {
            case 1:
                    case1 = 1;
                    printf("a: ");
                    scanf("%d");
                    break;
            case 2:
                    case2 = 1;
                    printf("a: ");
                    scanf("%d");
                    break;
            case 3:
                    case3 = 1;
                    printf("a: ");
                    scanf("%d");
                    break;
            case 4:
                    system("cls");
                    if(case1 ==1 && case2 == 1 && case3 == 1)
                    {
                        do {
                                printf("1 - Total de ECTS aprovados por um estudante");
                                printf("\n2 - Media aritmetica atual das classificacoes nas unidades curriculares aprovadas por um estudante");
                                printf("\n3 - Percentagem de ECTS aprovados em cada semestre letivo por um estudante");
                                printf("\n\nOpcao -> ");
                                scanf("%d",&submenu);

                                switch(submenu)
                                {
                                    case 1:
                                            system("cls");
                                            printf("Total de ECTS aprovados por um estudante: ");
                                            scanf("%d",&total_ects);
                                            break;
                                    case 2:
                                            system("cls");
                                            printf("Media aritmetica atual das classificacoes nas unidades curriculares aprovadas por um estudante: ");
                                            scanf("%f",&media);
                                            break;
                                    case 3:
                                            system("cls");
                                            printf("Percentagem de ECTS aprovados em cada semestre letivo por um estudante: ");
                                            scanf("%d",&percentagem_ects);
                                            break;
                                    case 4:
                                            printf("Sair");
                                            break;
                                    default:
                                            printf("Opcao invalida!\n");
                                            break;
                                }
                            } while (submenu != 3);
                    }
                        else
                        {
                            printf("Erro ao acessar estas informacoes!");
                            printf("\nE necessario registar as informacoes nas opcoes 1, 2, 3!");
                        }
                    break;
            case 5:
                    break;
            case 6:
                    sair = 1;
                    break;
            default:printf("Opcao invalida!");
        }while(opcao != 6);
    }while(!sair);
}
