/*
 *	File: EscolhaIfElse.cpp
 *	Author: Heliton Lima
 *	Created on: 19 de junho de 2020
 * 	Description: Multipla escolha com if else
 */
 
#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int num = 0;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	if(num == 1)
		puts("Voce digitou 1");
	
	if(num == 2)
		printf("Resultado: %d", num);
		
	if(num == 3)
		puts("Voce digitou 3");
	
	if(num == 4){
		for(int i=0; i<10; i++)
		printf("%d, ", num-i);
	}
	
	if(num == 0){
		puts("\nPrograma finalizado");
		exit(1);
	}
	else{
		puts("asldnlsainl");
	}
}
