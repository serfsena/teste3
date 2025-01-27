#include <stdio.h>
int main()
{
    // numero de iterações de i*i que chegue próximo a 1000000
    // Qual o valor de i*i que chega mais próximo de 1000000? 

    for (int i = 1 ; i< 1000; i++)
    {
        if(i*i > 1000000){
            break;
        }
        else{
            printf("%d%c%d\n",(i*i),' ',i);
        }
    }

    // Imprimir na tela solicitação para digitação de um primeiro número
    printf("Digite o primeiro número: ");
    // Ler o primeiro número
    int base;
    scanf("%d", &base);
    
    // Imprimir na tela solicitação para digitação de um segundo número
    printf("Digite o segundo número: ");
    // Ler o segundo número
    int expoente;
    scanf("%d", &expoente);
    
    // Calcular a potência do primeiro número elevado ao segundo número
    int resultado = 1;
    for(int i = 0; i < expoente; i++) {
        resultado *= base;
    }
    
    // Imprimir na tela o resultado da potência do primeiro número elevado ao segundo número
    printf("Resultado: %d\n", resultado);
    //Imprimir o valor de todas as variáveis
    printf("Valor de base: %d\n", base);
    printf("Valor de expoente: %d\n", expoente);
    printf("Valor de resultado: %d\n", resultado);
    return 0;

}