/*
 *	Arquivo:Ex2.cpp
 *	Autor: Heliton Martins
 *	Criado em: 9 de novembro de 2020
 *	Descrição: recursividade com operação em caixa eletrônico
 */ 
 
 #include <stdio.h>
 #include <stdlib.h>
 #include <conio.h>
 #include <locale.h>
 
 int validarSenha();
 int limite = 3, senhaDigitada = 0, opc = 0;
 void depositar();
 void menu();
 void sacar();
 void mostrarSaldo();
 void trocarSenha();
 float conta[3] = {1, 0, 123}; //indice 0 = numero de conta; indice 1 = saldo; indice 2 = senha;

int main(){

 	setlocale(LC_ALL,"Portuguese"); 
	
	int resposta = validarSenha();
	if(resposta){
		menu();
		
	}else{
		
		puts("\nVocê excedeu o limite de tentativas, tente novamente mais tarde.");
	}
	
}

 int validarSenha(){
 	
 	puts("\nDigite o numero da senha da sua conta:");
	scanf("%d",&senhaDigitada);
	
 	if(senhaDigitada == conta[2]){
 		
 		limite = 3;
 		return 1;
	 }
 	else{
 		limite --;
 		
 		if(limite == 0){
 			
 			return 0;
		 }else{
		 	
		 	puts("A senha digitada está incorreta, tente novamente.");
		 	
		 	printf("\nNúmero de tentativas restantes: %d \n\n", limite);
		 	puts("======================================================");
		 	
		 	validarSenha();
		 	
		 }
	 }
 }
 
 void menu(){
 	puts("\nVocê conectou a sua conta, escolha a opção desejada a ser executada:"
			"\n====================================================================="
			"\n 1 - Depositar"
			"\n 2 - Saque"
			"\n 3 - Vizualizar saldo"
			"\n 4 - Trocar Senha"
			"\n 5 - Sair da sua conta"
			"\n 6 - Sair do App"
			"\n====================================================================="
			);
		scanf("%d", &opc);
		if(opc == 1)
			depositar();
		else if(opc == 2)
			sacar();
		else if(opc == 3)
			mostrarSaldo();
		else if(opc == 4)
			trocarSenha();
		else if(opc == 5)
			main();
		else if(opc == 6)
			exit(1);
			
 }
 
 void depositar(){
 	
 	float valor = 0;
 	
	puts("\nDigite o valor a ser depositado: ");
 	scanf("%f", &valor);
 	
 	conta[1] += valor;
 	
 	puts("\nTransção realizada com sucesso");
 	menu();
 }
 
 void sacar(){
 	
 	float valor = 0;
 	
	puts("\nDigite o valor a ser sacado: ");
 	scanf("%f", &valor);
 	
 	conta[1] -= valor;
 	
 	puts("\nTransção realizada com sucesso");
 	menu();
 }
 
 void mostrarSaldo(){
 	
 	printf("O seu saldo atual é de: %.2f", conta[1]);
 }
 
 void trocarSenha(){
 	
	int senhaNova = 0;
	int senhaConfirmada = 0;
	
	puts("\nDigite a nova senha:");
	scanf("%d", &senhaNova);
	puts("\nConfirme sua senha:");
	scanf("%d", &senhaConfirmada);
	
	if(senhaNova == senhaConfirmada){
	
		conta[2] = senhaNova;
		puts("Senha alterada com sucesso!!!");
		menu();
	}
	else{
		
		puts("\nSenhas diferentes! Tente novamente");
		trocarSenha();
	}
 }
 
 

