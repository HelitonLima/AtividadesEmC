/*
 *	File: Multipla.cpp
 *	Author: Heliton Lima
 *	Created on: 19 de junho de 2020
 * 	Description: Uso de estrutura "switch case" para multipla
 */
 
#include<stdio.h>
#include<stdlib.h>

int main(){
	int num = 0;
	while(true){
		
		printf("Digite um numero: ");
		scanf("%d", &num);
		
		switch(num){
			case 1: 
				puts("Voce digitou o numero 1");
				break;
			
			case 2: 
				num = num*4;
				printf("Resultado: %d", num);
				break;
			
			case 3:	
				puts("Voce digitou o numero 3");
				break;
			
			case 4: 
				for(int i=0; i<10; i++)
				printf("%d, ", num-i);
				break;
				
			case 999: exit(1);				
			default: 
				puts("Voce NAO digitou nem 1, 2, 3, ou 4");
		}
	}
}
