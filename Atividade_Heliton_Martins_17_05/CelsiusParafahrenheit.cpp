/*
 *	Arquivo: CelsiusParaFahrenheit.cpp
 *	Autor: Heliton Martins
 *	Criado em: 17/05/2020
 *	Descrição: Programa para transforma celsius em fahrenheit
 */ 
 
 #include <stdio.h>
 #include <stdlib.h>
 #include <conio.h>
 
 main(){
 
 	float celsius, fahrenheit;
 	
 	celsius = fahrenheit = 0;
 	
 	printf("Digite o grau celsius: ");
 	scanf("%f", &celsius);
 	
 	fahrenheit = 32 + (9 * (celsius / 5));
	 	
 	printf("O valor em fahrenheit eh: %.2f", fahrenheit);
 	
 }
