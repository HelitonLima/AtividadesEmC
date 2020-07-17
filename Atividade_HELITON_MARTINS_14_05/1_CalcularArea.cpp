/*
    Nome: CalcularArea.cpp
    Autor: Heliton Martins
    Data: 14/05/20
    Descrição: Algoritmo para calcular area de um terreno
*/

#include <stdio.h>
#include <conio.h>

main(){
	
   float frente, fundo, area;
   frente = fundo = area = 0;
  
   printf("Digite o valor da frente do terreno: ");
   scanf("%f", &frente);
  
   printf("Digite o valor do fundo do terreno: ");
   scanf("%f", &fundo);
  
   area = (float)frente * fundo;
  
   printf("A area do terreno que possui frente igual a: %.2f", frente);
   printf("\nFundo igual a: %.2f", fundo);
   printf("\nEh: %.2f", area);
    
}
