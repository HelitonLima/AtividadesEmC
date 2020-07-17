/*
 *	Arquivo:ProvaExercicio2.cpp
 *	Autor: Heliton Martins
 *	Criado em: 11/07/2020
 *	Descrição: Programa para media de 15 numeros pegados de uma quantidade várial de números recebidos pelo usuário
 */ 
 
 #include <locale.h>
 #include <stdio.h>
 #include <stdlib.h>
 #include <conio.h>

main(){

	setlocale(LC_ALL, "Portuguese");
	
	//declaração de váriaveis
	int numero[];
	int verificacao, adicionar, i, numerosMedia, qntNumeros;
	float media;
	
	//zerando as váriaveis
	verificacao = numerosMedia = adicionar = qntNumeros = 0;
	media = 0.0;
	
	while(1){
		
		puts("\nDigite um numero positivo: (0 para pausar e realizar a média)");
		scanf("%d", &verificacao);
		
		if(verificacao > 0){ //verificando se é positivo
		
			adicionar++;//adicionando 1 no indice do vetor
			
			numero[adicionar] = verificacao;//adicionando numero posistivo e diferente de 0 ao vetor
			
		}else if(verificacao == 0){//verificando se o usuario quer relaizar a media
			for(i =1; i <= adicionar; i++){//criando um for para pegar todos os indices do vetor numero
				if(numero[i] % 2 == 0){//verificando se o numero do vetor com indice i é par
					numerosMedia += numero[i]; // adicionando o numero do vetor a uma variavel que recebe ela mais o numero do vetor
					qntNumeros++;//adicionando um na variavel para poder vireficar se está no limite da quantidade de numeros
					if(qntNumeros == 15){//verficando se a quantidade de  numeros esta no limuite
						i = adicionar + 1;//parando o for
					}//fim do if da verificação de quantidade de numeros limites
				}//fim do if da verificação de numero par
			}//fim do for
			printf("\n%d", adicionar);
			printf("\n%d", numerosMedia);
			media =  numerosMedia / 15;
			printf("\n media dos 15 numeros pares digitados é: %.2f", media);
		}
		
	}//fim do while
}//fim do metodo main
