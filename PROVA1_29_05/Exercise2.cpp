/*
 *	File:Exercise2.cpp
 *	Author: Heliton Martins
 *	Create in: 15/05/2020
 *	Description: Sistema para classificar a temperatura de uma pessoa
 */ 
 
 #include <stdio.h>
 #include <stdlib.h>
 #include <conio.h>
 
 main(){
 	
 	float temperature;
 	
 	temperature = 0.0;
 	
 	puts("Por favor, digite sua temperatura: ");
 	scanf("%f", &temperature);
 	
 	if(temperature < 36){
 		puts("Voce esta com hipotemia.");
	 }	/*	1� if - Hipotemia	*/
	 else if(temperature <= 37.8){
	 	puts("Voce esta Normal.");
	 }	/*	2� if - Normal	*/
	 else if(temperature <= 39.5){
	 	puts("Voce esta com febre.");
	 }	/*	3� if - Febre	*/
	 else if(temperature <= 41){
	 	puts("Voce esta com febre alta.");
	 }	/*	3� if - Febre Alta	*/
	 else{
	 	puts("Voce esta com hipertemia.");
	 }	/*	fim da condi��o - Hipertemia	*/
 	
 }	/*	Fim do c�digo	*/
