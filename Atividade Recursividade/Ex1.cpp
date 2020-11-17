/*
 *	Arquivo:Ex1.cpp
 *	Autor: Heliton Martins
 *	Criado em: 9 de novembro de 2020
 *	Descrição: recursividade com sequência de Fibonacci
 */ 
 
 #include <stdio.h>
 #include <stdlib.h>
 #include <conio.h>
 
 void fibonacci();
 int f1 = 0, f2 = 1, f3;
 
int main(){
 	printf("1 ");
	fibonacci();

}
void fibonacci(){
		f3 = f1 + f2;
		printf("%d ", f3);
		f1 = f2;
		f2 = f3;
		fibonacci();
	}
