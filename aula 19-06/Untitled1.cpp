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
		
		puts("Menu de op��es: "
			"\n====================="
			"\n1 - Adi��o"
			"\n2 - Subtra��o"
			"\n3 - Multiplica��o"
			"\n4 - Divis�o"
			"\n5 - Pot�ncia"
			"\n6 - Fotorial");
		
		switch(opc){
			
			case 1:
				break;
				
			case 0: exit(1);
			
		}//fim do switch
		
		printf("\nO resultado �: %2.f", result);
		
		system("pause");
		
	}//fim do while
	
}
