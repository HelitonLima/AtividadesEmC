#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


//Algoritmo para Calculo da n�mero digitado pelo usuario
//Autor: Marcos Paulo Almeida Furtuozo Silva
//Data:24/05/2020

int main(){
    setlocale(LC_ALL, "Portuguese");
    int numeros = 0, acomuladora = 0, count = 0;
    float media = 0;
    puts("Digite qualquer n�mero maior que 15");
    scanf("%d", &numeros);
    if(numeros < 15)
        puts("O n�mero digitado deve ser maior que 15!");
        
    for(int i = 0; i < 15; i++){
        puts("Digite um valor dentro do n�mero anteriormente digitado!");
        scanf("%d",&acomuladora);
        if(acomuladora %2 == 0){
            acomuladora += acomuladora;
            count += 1;
            }

        }
    media = (float) acomuladora / count;
    if(media < 15.0)
    printf("Abaixo da M�dia %2.f \n", media);

    if(media > 15.0 && media <= 50.0)
    printf("Dentro do esperado %2.f \n", media);

    if(media  > 50.0)
    printf("Acima da M�dia %2.f \n", media);

    system("pause");
}
