#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main(){
	
	setlocale(LC_ALL, "Portuguese");	
	
	int opc;
	
	while(1){
		
		system("cls");
		
		opc = 0;
		
		puts("Calculadora em C");
		puts("==============================================================");
		
		puts("Menu de opções: "
			"\n====================="
			"\n1 - Adição"
			"\n2 - Subtração"
			"\n3 - Multiplicação"
			"\n4 - Divisão"
			"\n5 - Potência"
			"\n6 - Fotorial");
		
		switch(opc){
			
			case 1:
				break;
				
			case 0: exit(1);
			
		}//fim do switch
		
		printf("\nO resultado é: %2.f", result);
		
		system("pause");
		
	}//fim do while
	
}
