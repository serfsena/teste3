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
}