/*
 *	Arquivo: PositivoParaNegativo.cpp
 *	Autor: Heliton Martins
 *	Criado em: 17/05/2020
 *	Descrição: Programa para transforma o valor de celsius positivo em negativo
 */ 
 
 #include <stdio.h>
 #include <stdlib.h>
 #include <conio.h>
 
 main(){
 
 	float celsius, cont;
 	
 	celsius = cont = 0;
 	
 	printf("Digite o grau celsius: ");
 	scanf("%f", &celsius);
 	
 	if(celsius > 0){
 		
	 	cont = celsius-(celsius*2);
	 	
	 	do{
	 		
	 		printf("\n %.2f", celsius);
	 		celsius--;
	 		
		 }while(celsius >= cont);
 		
	 }else{
	 	
	 	printf("Digite um valor maior que 0!");
	 	
	 }
 	
 }
