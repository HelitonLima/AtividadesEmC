/*
 *	File: CAlculadora.cpp
 *	Author: Heliton Lima
 *	Created on: 19 de junho de 2020
 * 	Description: calculadora com 6 funções
 */
 
#include<stdio.h>
#include<stdlib.h>
#include <math.h>

int main(){
	
	int num;
	float  first, second;
	
	num = 0;
	first = second = 0.0;
	
	while(1){
	
		puts("\n\nEscolha uma das operacoes: \n Adicao (1)\n Subtracao (2)\n Multiplicacao (3)\n Divisao (4)\n Potenciar (5)\n Fatoriar (6)\n Sair do programa (0)");
		scanf("%d", &num);
		
		switch(num){
			
			case 0:
				puts("Obrigado por utilizar essa calculadora, obrigado!");
				exit(1);
			
			case 1:
				puts("Digite um numero para realizar a adicao: ");
				scanf("%f", &first);
				
				puts("Digite outro numero para realizar a adicao: ");
				scanf("%f", &second);
				
				first = first + second;
				printf("\nO resultado eh: %.2f", first);
				break;
				
			case 2:
				puts("Digite um numero para realizar a subtracao: ");
				scanf("%f", &first);
				
				puts("Digite outro numero para realizar a subtracao: ");
				scanf("%f", &second);
				
				first = first - second;
				printf("\nO resultado eh: %.2f", first);
				break;
			
			case 3:
				puts("Digite um numero para realizar a multiplicacao: ");
				scanf("%f", &first);
				
				puts("Digite outro numero para realizar a multiplicacao: ");
				scanf("%f", &second);
				
				first = first * second;
				printf("\nO resultado eh: %.2f", first);
				break;	
				
			case 4:
				puts("Digite um numero para realizar a divisao: ");
				scanf("%f", &first);
				
				puts("Digite outro numero para realizar a divisao: ");
				scanf("%f", &second);
				
				first = first / second;
				printf("\nO resultado eh: %.2f", first);
				break;	
				
			case 5:
				puts("Digite um numero para realizar a potenciacao: ");
				scanf("%f", &first);
				
				puts("Digite outro numero para realizar a potenciacao: ");
				scanf("%f", &second);
				
				first = pow(first, second);
				printf("\nO resultado eh: %.2f", first);
				break;	
			
			case 6:
				puts("Digite um numero para realizar a fatoracao: ");
				scanf("%f", &first);
				
				do{
					second = second + first;
					first --;
					printf("%2.2f", second);
				}while(first >= 1);
				
				printf("\nO resultado eh: %.2f", second);
				break;	
				
			default:
				puts("O numero digitado nao foi reconhecido como uma das instrucoes");
		
		}	/* Fim do switch */
	}	/*	Fim do while	*/
}	/*	Fim do metodo main	*/
