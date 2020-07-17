/*
    Nome: Trocar.cpp 
    Autor: Heliton Martins
    Data: 14/05/20
    Description: Algoritmo para fazer a troca de valores de duas variáveis sem uso de auxiliar
    
*/

#include <stdio.h>
#include <conio.h>

main(){
	
    int a, b;
    a = b = 0;

    printf("Digite um valor aleatorio inteiro: ");
    scanf("%d", &a);
  
    printf("Digite outro valor aleatorio inteiro: ");
    scanf("%d", &b);
  
    a = a + b;
    b = a - b;
    a = a - b;
  
    printf("Valor de a: %d", a);
	printf ("\nValor de b: %d", b);

}
