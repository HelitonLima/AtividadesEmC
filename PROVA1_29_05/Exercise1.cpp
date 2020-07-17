/*
 *	File:Exercise1.cpp
 *	Author: Heliton Martins
 *	Create in: 15/05/2020
 *	Description: Sistema para classificar um numero como par ou ímpar 
 */ 
 
 #include <stdio.h>
 #include <stdlib.h>
 #include <conio.h>
 
 main(){
 	int number;
 	
 	number = 0;
 	
 	printf("Por favor, digite um numero: ");
 	scanf("%d", &number);
 	
 	if(number == 0){
 		puts("Seu numero digitado foi: 0.");
	}	/*	1º if	- 0	*/
	else if(number % 2 == 0){
 		puts("Seu numero e par.");
 		printf("seu numero digitado foi: %d", number);
		 	
	}	/*	2º if	- par	*/
	else{
		puts("Seu numero e impar.");
		printf("seu numero digitado foi: %d", number);
	}	/*	fim da condição	- impar	*/
 
 }	/*	Fim do código	*/
