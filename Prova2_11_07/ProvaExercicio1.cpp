/*
 *	Arquivo:ProvaExercicio1.cpp
 *	Autor: Heliton Martins
 *	Criado em: 11/07/2020
 *	Descrição: Programa para pizzaria
 */ 
 
 #include <locale.h>
 #include <stdio.h>
 #include <stdlib.h>
 #include <conio.h>

main(){

	setlocale(LC_ALL, "Portuguese");
	
	//declaração de váriaveis
	char opcTipo;
	int opcSabor, opcSabor2;
	
	//zerando as váriaveis
	opcSabor2 = opcSabor = 0;
	opcTipo = ' ';
	
	while(1){
		
		printf("\nDeseja uma pizza meio-a-meio? (Digite S para Sim ou N para Não)");
 		scanf(" %c", &opcTipo);
 		
 		if(opcTipo == 'S' || opcTipo == 's'){
 			
 			puts("Escolha a primeira metade: "
			"\n====================="
			"\n1 - Mussarela"
			"\n2 - Frango com Catupiry"
			"\n3 - Calabresa"
			"\n4 - Chocolate"
			"\n5 - 4 Queijos");
			
			scanf(" %d", &opcSabor);
		
			switch(opcSabor){
				case 1:
					puts("Escolha a segunda metade: "
						"\n====================="
						"\n1 - Frango com Catupiry"
						"\n2 - Calabresa"
						"\n3 - Chocolate"
						"\n4 - 4 Queijos");
					
					scanf(" %d", &opcSabor2);
					
					switch(opcSabor2){ 
						case 1:
							puts("Voce escolheu uma pizza meio-a-meio de Mussarela e Frango com Catupiry");
							break;
						case 2:
							puts("Voce escolheu uma pizza meio-a-meio de Mussarela e Calabresa");
							break;
						case 3:
							puts("Voce escolheu uma pizza meio-a-meio de Mussarela e Chocolate");
							break;
						case 4:
							puts("Voce escolheu uma pizza meio-a-meio de Mussarela e 4 Queijos");
							break;
						default:
							puts("Houve um erro com um dos numeros digitados:");
							printf(" %d", opcSabor);
							printf("\n %d", opcSabor2);
					}//fim do segundo switch
					break;//fim do caso 1
					
				case 2:
					puts("Escolha a segunda metade: "
						"\n====================="
						"\n1 - Mussarela"
						"\n2 - Calabresa"
						"\n3 - Chocolate"
						"\n4 - 4 Queijos");
					
					scanf(" %d", &opcSabor2);
					
					switch(opcSabor2){
						case 1:
							puts("Voce escolheu uma pizza meio-a-meio de Frango com Catupiry e Mussarela");
							break;
						case 2:
							puts("Voce escolheu uma pizza meio-a-meio de Frango com Catupiry e Calabresa");
							break;
						case 3:
							puts("Voce escolheu uma pizza meio-a-meio de Frango com Catupiry e Chocolate");
							break;
						case 4:
							puts("Voce escolheu uma pizza meio-a-meio de Frango com Catupiry e 4 Queijos");
							break;
						default:
							puts("Houve um erro com um dos numeros digitados:");
							printf(" %d", opcSabor);
							printf("\n %d", opcSabor2);
							
					}//fim do terceiro switch
					break;//fim do caso 2
					
				case 3:
					puts("Escolha a segunda metade: "
						"\n====================="
						"\n1 - Mussarela"
						"\n2 - Frango com Catupiry"
						"\n3 - Chocolate"
						"\n4 - 4 Queijos");
					
					scanf(" %d", &opcSabor2);
					
					switch(opcSabor2){
						case 1:
							puts("Voce escolheu uma pizza meio-a-meio de Calabresa e Mussarela");
							break;
						case 2:
							puts("Voce escolheu uma pizza meio-a-meio de Calabresa e Frango com Catupiry");
							break;
						case 3:
							puts("Voce escolheu uma pizza meio-a-meio de Calabresa e Chocolate");
							break;
						case 4:
							puts("Voce escolheu uma pizza meio-a-meio de Calabresa e 4 Queijos");
							break;
						default:
							puts("Houve um erro com um dos numeros digitados:");
							printf(" %d", opcSabor);
							printf("\n %d", opcSabor2);
							
					}//fim do quarto switch
					break;//fim do caso 3
					
				case 4:
					puts("Escolha a segunda metade: "
						"\n====================="
						"\n1 - Mussarela"
						"\n2 - Frango com Catupiry"
						"\n3 - Calabresa"
						"\n4 - 4 Queijos");
					
					scanf(" %d", &opcSabor2);
					
					switch(opcSabor2){
						case 1:
							puts("Voce escolheu uma pizza meio-a-meio de Chocolate e Mussarela");
							break;
						case 2:
							puts("Voce escolheu uma pizza meio-a-meio de Chocolate e Frango com Catupiry");
							break;
						case 3:
							puts("Voce escolheu uma pizza meio-a-meio de Chocolate e Calabresa");
							break;
						case 4:
							puts("Voce escolheu uma pizza meio-a-meio de Chocolate e 4 Queijos");
							break;
						default:
							puts("Houve um erro com um dos numeros digitados:");
							printf(" %d", opcSabor);
							printf("\n %d", opcSabor2);
							
					}//fim do quinto switch
					break;//fim do caso 4
					
				case 5:
					puts("Escolha a segunda metade: "
						"\n====================="
						"\n1 - Mussarela"
						"\n2 - Frango com Catupiry"
						"\n3 - Calabresa"
						"\n4 - 4 Queijos");
					
					scanf(" %d", &opcSabor2);
					
					switch(opcSabor2){
						case 1:
							puts("Voce escolheu uma pizza meio-a-meio de 4 Queijos e Mussarela");
							break;
						case 2:
							puts("Voce escolheu uma pizza meio-a-meio de 4 Queijos e Frango com Catupiry");
							break;
						case 3:
							puts("Voce escolheu uma pizza meio-a-meio de 4 Queijos e Calabresa");
							break;
						case 4:
							puts("Voce escolheu uma pizza meio-a-meio de 4 Queijos e Chocolate");
							break;
						default:
							puts("Houve um erro com um dos numeros digitados:");
							printf(" %d", opcSabor);
							printf("\n %d", opcSabor2);
							
					}//fim do sexto switch
					break;//fim do caso 5	
				
				default:
					puts("Houve um erro com um dos numeros digitados:");
					printf(" %d", opcSabor);
					printf("\n %d", opcSabor2);
				
			}//fim do switch
			
		 }else{
		 	
		 	puts("Escolha o sabor de sua pizza: "
			"\n====================="
			"\n1 - Mussarela"
			"\n2 - Frango com Catupiry"
			"\n3 - Calabresa"
			"\n4 - Chocolate"
			"\n5 - 4 Queijos");
			
			scanf(" %d", &opcSabor);
		
			switch(opcSabor){
				case 1:
					puts("Voce escolheu uma pizza de Mussarela!");
					break;
				case 2:
					puts("Voce escolheu uma pizza de Frango com Catupiry!");
					break;
				case 3:
					puts("Voce escolheu uma pizza de Calabresa!");
					break;
				case 4:
					puts("Voce escolheu uma pizza de Chocolate!");
					break;
				case 5:
					puts("Voce escolheu uma pizza de 4 Queijos!");
					break;
				default:
					puts("Houve um erro com um dos numeros digitados:");
					printf(" %d", opcSabor);
					printf("\n %d", opcSabor2);
			
			}//fim do sétimo switch
		 	
		 }// fim do else
		 
		puts("\nDeseja montar outro pedido? (Digite N para Nao)");
 		scanf(" %c", &opcTipo);
 		if(opcTipo == 'N' || opcTipo == 'n'){
 			exit(1);
		 }
 		
	}//fim do while
}//fim do metodo main
