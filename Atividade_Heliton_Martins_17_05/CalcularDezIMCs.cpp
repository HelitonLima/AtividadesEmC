/*
    Nome: CalcularDezIMCs.cpp 
    Autor: Heliton Martins
    Data: 17/05/20
    Description: Algoritmo para classificar o imc de dez usu�rios conforme a necessidade
    
*/

#include <stdio.h>
#include <conio.h>

main(){
	
	float altura, peso, imc;
	
	int cont;
	
	altura = peso = imc = 0;
	
	for(cont = 0; cont < 10; cont++){
		
		printf("\n Digite sua altura: ");
		scanf("%f", &altura);    
		
		printf("Digite seu peso: ");
		scanf("%f", &peso);
		
		imc = peso / (altura * altura);
		
		printf("Seu imc eh %.f", imc);
		
		if(imc < 16){
		    printf(". Voce esta com magreza grave");
		}
		else if(imc < 17){
		    printf(". Voce esta com magreza moderada ");
		}
		else if (imc < 18.5){
		    printf(". Voce esta com magreza leve");
		}
		else if (imc < 25){
		    printf(". Voce esta saudavel e com o peso ideal");
		}
		else if(imc < 30){
		    printf(". Voce esta com sobrepeso");
		}
		else if(imc < 35)
		{
		    printf("Voce esta com obesidade grau 1");
		}
		else if(imc < 40){
		    printf("Voce esta com obesidade grau 2(considerada severa)");
		}
		else{
		    printf("Voce esta com obesidade grau 3 (considerada morbida)");
		}
		
	}
	
}
