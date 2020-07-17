/*
 *	Arquivo:ProvaExercicio3.cpp
 *	Autor: Heliton Martins
 *	Criado em: 11/07/2020
 *	Descrição: Programa calculo de media do peso de uma pequena cidade
 */ 
 
 #include <locale.h>
 #include <stdio.h>
 #include <stdlib.h>
 #include <conio.h>

main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	//declaração de váriaveis
	float peso[12];
	char sexo[12];
	float mediaHomens, mediaMulheres, homens, mulheres;
	int i,x,  homensQnt, mulheresQnt;
	
	//zerando as váriaveis
	i =  homensQnt = mulheresQnt = 0;
	homens = mulheres = mediaHomens = mediaMulheres = 0.0;
	
	//for para incrementar o vetor peso
	for(i = 0; i < 12; i++){
		puts("Digite o peso da pessoa: ");
		scanf("%f", &peso[i]);
		puts("Digite o sexo da pessoa: (H para homem ou M para mulher)");
		scanf(" %c", &sexo[i]);
	}//fim do for
	
	//for para colocar os pesos em uma única variavel
	for(i = 0; i < 12; i++){
		if(sexo[i] == 'H' || sexo[i] == 'h'){
			homens += peso[i];
			homensQnt++;
		}else if(sexo[i] == 'M' || sexo[i] == 'm'){
			mulheres += peso[i];
			mulheresQnt++;
		}
	}//fim do for
	
	//if para verificação de quantidade de homens
	if(homensQnt == 0){
		mediaHomens = 0.0;
		printf("\nNão foi digitado nenhuma pessoa do sexo masculino");
	}else{
		mediaHomens = homens / homensQnt;
		printf("\nA media de peso entre os homens é de: %.2f", mediaHomens);
	}//fim do if
	
	//if para verificação de quantidade de mulheres
	if(mulheresQnt == 0){
		mediaMulheres = 0.0;
		printf("\nNão foi digitado nenhuma pessoa do sexo feminino");
	}else{
		mediaMulheres = mulheres / mulheresQnt;
		printf("\nA media de peso entre as mulheres é de: %.2f", mediaMulheres);
	}//fim do if
	
	//for para criar uma lista com todos pesos seguidos dos sexos
	for(i = 0; i < 12; i++){
		printf("\nPeso: %.2f", peso[i]);
		printf("\nSexo: %c", sexo[i]);
	}//fim do for
	
}//fim do metodo main
