#include <stdlib.h>
#include <stdio.h>

// função que testa o valor digitado pelo usuario
int testa_val_dec()
{
    int valor_decimal;
    while(valor_decimal <0 || valor_decimal >15)
    {
        printf("\nDigite um valor entre zero e quinze: ");
        scanf("%d",&valor_decimal);
    }
    return valor_decimal;
}
// função que retorna a conversão de decimal para binario
int* conv_dec_binario(int val_dec)
{
    int valor;
    int* valor_binario;

    valor = val_dec;

    valor_binario = malloc (4 * sizeof (int));

    int i;
    for(i = 3; i >= 0; i--)
    {
        valor_binario[i] = valor %2;
        valor = valor/2;
    }

    return valor_binario;
}

void exibe_conversao(int* valor_binario)
{

    int valor_decimal;

    printf("\nValor binario: %d %d %d %d\n", valor_binario[0],valor_binario[1],valor_binario[2],valor_binario[3]);

    valor_decimal = pow(2,3)*valor_binario[0] + pow(2,2)*valor_binario[1] + pow (2,1)*valor_binario[2] + pow(2,0)*valor_binario[3];

    printf("Valor decimal: %d\n", valor_decimal);

}

void testa_senha(int* valor_binario)
{
    if((valor_binario[0] == 0 && valor_binario[1] == 1) || (valor_binario[0] == 0 && valor_binario[2] == 1 && valor_binario[3] == 1) || (valor_binario[0] == 1 && valor_binario[1] == 0 && valor_binario[2] == 0))
    {
        printf("Acesso permitido!\n");
    }
    else
    {
        printf("Acesso negado!\n");
    }
}

int main()
{
    int* binario;

    int sai_prog;

    while( sai_prog != 0 )
    {

        binario = conv_dec_binario(testa_val_dec());

        exibe_conversao(binario);

        testa_senha(binario);

        printf("\nDigite zero para sair ou qualquer outro valor para continuar: ");

        scanf("%d",&sai_prog);
    }

    return 0;
}
