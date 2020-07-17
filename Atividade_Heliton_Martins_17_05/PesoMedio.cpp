/*
 *	Arquivo: PesoMedio.cpp
 *	Autor: Heliton Martins
 *	Criado em: 17/05/2020
 *	Descrição: Programa para calcular peso medio de n pessoas
 */ 
 
 #include <stdio.h>
 #include <stdlib.h>
 #include <conio.h>
 
 main(){
 	
 	float peso, resultado;
 	
 	int cont;
	 
	resultado = 0;
	peso = 1;
 	cont = 0;
 	
 	while(peso != 0){
 		
 		printf("Dgiite o peso: ");
 		
	 	scanf("%f", &peso);
		cont ++;
		
		resultado = (resultado + peso)/cont;
 		
	 }
	 
	 printf("O peso medio eh: %.2f", resultado);
	 printf("\n A quantidade de pessoas analisadas foram: %d", cont - 1);
 	
 }
