#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "portuguese");

    //variáveis
    int codigo_secreto = 0;
    int digito1c = 0;
    int digito2c = 0;
    int digito3c = 0;
    int digito4c = 0;

    int codigo = 0;
    int digito1t = 0;
    int digito2t = 0;
    int digito3t = 0;
    int digito4t = 0;

    char c1 = '_';
    char c2 = '_';
    char c3 = '_';
    char c4 = '_';

    int exec1 = 0;
    int exec2 = 0;
    int exec3 = 0;
    int exec4 = 0;

    int d1 = 0;
    int d2 = 0;
    int d3 = 0;
    int d4 = 0;

    int tentativas = 10;
    int jogar = 1;
    int aux1 = 0;
    int aux2 = 0;
    int contap = 0;
    int tentusadas = 0;

    //loop para jogar
    while(jogar == 1)
    {
        c1 = '_';
        c2 = '_';
        c3 = '_';
        c4 = '_';
        tentusadas = 0;
        d1 = 0;
        d2 = 0;
        d3 = 0;
        d4 = 0;
        exec1 = 0;
        exec2 = 0;
        exec3 = 0;
        exec4 = 0;

        //gerador de código
        codigo_secreto = 1000 +(rand() % 9000);

        //transformando o código secreto em dígitos
        aux1 = codigo_secreto;
        digito4c = aux1 % 10;
        aux1 /= 10;
        digito3c = aux1 % 10;
        aux1 /= 10;
        digito2c = aux1 % 10;
        aux1 /= 10;
        digito1c = aux1 % 10;

        //apresentação
        printf("\t\t => Bem Vindo Ao Jogo SECRETO!!! <=\n\n");
        printf("\tVocê tem 10 tentativas para acertar o número secreto entre [1000 e 9999]\n");
        printf("\tA partir da 5a. tentativa o jogo irá te ajudar, dando dicas\n\n\t\t");
        system("pause");
        system("cls");

        //tentativas
        for(tentativas = 10; tentativas > 0; tentativas--)
        {
            tentusadas++;

            //tentativa de código
            printf("Digite sua tentativa de código: ");
            scanf("%d", &codigo);
            if(codigo < 1000 || codigo > 9999)
            {
                printf("\t\t\t\tA T E N Ç Ã O\n");
                printf("\tNúmero inválido\n");
                printf("Digite um valor entre 1000 e 9999\n\n\t\t\t\t");
                tentativas++;
                tentusadas--;
                system("pause");
                system("cls");
                continue;
            }

            //transformando a tentativa de código em dígitos
            digito4t = codigo % 10;
            codigo /= 10;
            digito3t = codigo % 10;
            codigo /= 10;
            digito2t = codigo % 10;
            codigo /= 10;
            digito1t = codigo % 10;

            //verificação de dígitos
            if(tentusadas >= 5)
                {
                    printf("\nVamos dar umas dicas!!!!\n");
                }

            if(digito1t == digito1c)
            {
                printf("\n\tVocê acertou o dígito da primeira posição\n");
                c1 = '0' + digito1t;
                d1 = 1;
            }
            else
            {
                printf("\n\tVocê errou o dígito da primeira posição\n");
                if(tentusadas >= 5 && c1 == '_')
                {
                    contap = digito1c % 2;
                    if(contap == 0 && exec1 == 0)
                    {
                        printf("\t\t=> O primeiro dígito é par\n");
                    }
                    if(contap != 0 && exec1 == 0)
                    {
                        printf("\t\t=> O primeiro dígito é ímpar\n");
                    }
                    if(digito1c > 5 && exec1 == 1)
                    {
                        printf("\t\t=> O primeiro dígito é maior que 5\n");
                    }
                    if(digito1c <= 5 && exec1 == 1)
                    {
                        printf("\t\t=> O primeiro dígito é menor ou igual a 5\n");
                    }
                    exec1++;
                }
            }
            printf("\n");
            if(digito2t == digito2c)
            {
                printf("\tVocê acertou o dígito da segunda posição\n");
                c2 = '0' + digito2t;
                d2 = 1;
            }
            else
            {
                printf("\tVocê errou o dígito da segunda posição\n");
                if(tentusadas >= 5 && c1 != '_' && c2 == '_')
                {
                    contap = digito2c % 2;
                    if(contap == 0 && exec2 == 0)
                    {
                        printf("\t\t=> O segundo dígito é par\n");
                    }
                    if(contap != 0 && exec2 == 0)
                    {
                        printf("\t\t=> O segundo dígito é ímpar\n");
                    }
                    if(digito2c > 5 && exec2 == 1)
                    {
                        printf("\t\t=> O segundo dígito é maior que 5\n");
                    }
                    if(digito2c <= 5 && exec2 == 1)
                    {
                        printf("\t\t=> O segundo dígito é menor ou igual a 5\n");
                    }
                    exec2++;
                }
            }
            printf("\n");
            if(digito3t == digito3c)
            {
                printf("\tVocê acertou o dígito da terceira posição\n");
                c3 = '0' + digito3t;
                d3 = 1;
            }
            else
            {
                printf("\tVocê errou o dígito da terceira posição\n");
                if(tentusadas >= 5 && c1 != '_' && c2 != '_' && c3 == '_')
                {
                    contap = digito3c % 2;
                    if(contap == 0 && exec3 == 0)
                    {
                        printf("\t\t=> O terceiro dígito é par\n");
                    }
                    if(contap != 0 && exec3 == 0)
                    {
                        printf("\t\t=> O terceiro dígito é ímpar\n");
                    }
                    if(digito3c > 5 && exec3 == 1)
                    {
                        printf("\t\t=> O terceiro dígito é maior que 5\n");
                    }
                    if(digito3c <= 5 && exec3 == 1)
                    {
                        printf("\t\t=> O terceiro dígito é menor ou igual a 5\n");
                    }
                    exec3++;
                }
            }
            printf("\n");
            if(digito4t == digito4c)
            {
                printf("\tVocê acertou o dígito da quarta posição\n");
                c4 = '0' + digito4t;
                d4 = 1;
            }
            else
            {
                printf("\tVocê errou o dígito da quarta posição\n");
                if(tentusadas >= 5 && c1 != '_' && c2 != '_' && c3 != '_' && c4 == '_')
                {
                    contap = digito4c % 2;
                    if(contap == 0 && exec4 == 0)
                    {
                        printf("\t\t=> O quarto dígito é par\n");
                    }
                    if(contap != 0 && exec4 == 0)
                    {
                        printf("\t\t=> O quarto dígito é ímpar\n");
                    }
                    if(digito4c > 5 && exec4 == 1)
                    {
                        printf("\t\t=> O quarto dígito é maior que 5\n");
                    }
                    if(digito4c <= 5 && exec4 == 1)
                    {
                        printf("\t\t=> O quarto dígito é menor ou igual a 5\n");
                    }
                    exec4++;
                }
            }
            printf("\n");

            //resultado final
            if(d1 == 1 && d2 == 1 && d3 == 1 && d4 == 1)
            {
                system("cls");
                printf("\t\t=> P A R A B É N S ! ! !\n\n");
                printf("\t\tVocê acertou o código: %d %d %d %d\n", digito1c, digito2c, digito3c, digito4c);
                printf("\t\t em %d tentativas\n\n\t\t\t\t", tentusadas);
                system("pause");
                system("cls");
                break;
            }
            else
            {
                aux2 = tentativas - 1;
                printf("Faltam %d tentativas\n", aux2);
                printf("Seu código é: %c %c %c %c\n\n\t\t\t\t", c1, c2, c3, c4);
                system("pause");
                system("cls");
            }
        }

        //perder no jogo
        if(tentativas == 0)
            {
                printf("Número de Tentativas Excedidas!!!\n\n");
                printf("Você NÃO CONSEGUIU ACERTAR\n");
                printf("O CÓDIGO QUE ERA: %d\n\n\t\t\t\t", codigo_secreto);
                system("pause");
                system("cls");
            }

    //recomeçar jogo
    printf("\n\tJogar mais uma vez??? 1=SIM E 0=NÃO\n");
    printf("\t\t==> ");
    scanf("%d", &jogar);
    system("cls");
    if(jogar != 0 && jogar != 1)
    {
        printf("Erro! Número inválido");
        exit(0);
    }
    }
    return 0;
}

/*char, '0' e o codigo ascii 48, na conta esta somando o numero digitado pela codigo ascii que da o numero, por exemplo o digito 1
e 48 + 1 que da 49 que e o digito 1*/