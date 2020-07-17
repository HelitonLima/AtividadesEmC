/*
 *	File:Exercise4.cpp
 *	Author: Heliton Martins
 *	Create in: 15/05/2020
 *	Description: Sistema para classificar torcedores entre homens, mulheres e crianças
 */ 
 
 #include <stdio.h>
 #include <stdlib.h>
 #include <conio.h>
 
 main(){
 	
 	int total, kid, m ,w, age;
	char con, sexuality;
	
	con = sexuality = ' '; 	
 	total = m = w = kid = age = 0;
 	
 	while(1){
 		
 		printf("Deseja realizar uma leitura de torcedor? (S) ou (N): ");
		scanf(" %c", &con);
		
		if(con == 'N' || con == 'n'){
			puts("Obrigado, ate!");
			break;
		}	/*	if para continuar a leitura	*/
		else{
			
			printf("Digite sua idade: ");
			scanf("%d", &age);
			if(age <= 12){
				kid++;
				puts("Crianca adionada com sucesso!");
			}	/*	if para criança	*/
			else{
				printf("Digite, se for homem (H), se for mulher (M): ");
				scanf(" %c", &sexuality);
				
				if(sexuality == 'H' || sexuality == 'h'){
					m++;
					puts("Homem adionado com sucesso!");
				}
				else if(sexuality == 'M' || sexuality == 'm'){
					w++;
					puts("Mulher adionada com sucesso!");
				}
				else{
					puts("Ocorreu um erro com a digitacao, o programa será finalizado");
					break;
				}	/*	Fim do if para homens e mulheres	*/
					
			}	/*	Fim do if para adulto	*/
			
			total++; /*	Depois de todas condições, adicionar um no total	*/
			
		}	/*	Fim da leitura	*/
		
	 }	/*	Fim da repetição	*/
	 
	 printf("O total de torcedores e: %d", total);
	 printf("\nO total de homens e: %d", m);
	 printf("\nO total de mulheres e: %d", w);
	 printf("\nO total de criancas e: %d", kid);
 	
}	/*	Fim do código	*/
