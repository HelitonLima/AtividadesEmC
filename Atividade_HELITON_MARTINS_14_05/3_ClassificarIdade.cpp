/*
    Nome: ClassificarIdade.cpp 
    Autor: Heliton Martins
    Data: 14/05/20
    Description: Algoritmo para classificar a idade do usuário conforme a necessidade
    
*/

#include <stdio.h>
#include <conio.h>

main (){
    
	int idade = 0;
	
	printf( "Digite sua idade: ");
	scanf("%d", &idade);  
	 
	if (idade <= 12){
	    printf("Voce eh classificado(a) como crianca");
	}
	else if ( idade <= 19){
	    printf("Voce eh classificado(a) como adolescente");
	}
	else if (idade <= 60){
	    printf("Voce eh classificado(a) como adulto");
	}
	else {
	 printf ("Voce eh classificado(a) como idoso");
	}
}

