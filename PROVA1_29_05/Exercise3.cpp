/*
 *	File:Exercise3.cpp
 *	Author: Heliton Martins
 *	Create in: 15/05/2020
 *	Description: Sistema para classificar a porcetagem de vezes que cada numero de um dado foi mostrado
 */ 
 
 #include <stdio.h>
 #include <stdlib.h>
 #include <conio.h>
 
 main(){
 
 	int face, face1, face2, face3, face4, face5, face6, limit;
 	
 	face = face1 = face2 = face3 = face4 = face5 = face6 = 0;
 	
 	for(limit = 0; limit < 100; limit++){
 		
 		puts("Digite o numero da face: ");
 		
 		scanf("%d", &face);
 		
 		if(face == 1){
 			face1++;
		 }	/*	1º if - face 1	*/
		 else if (face == 2){
		 	face2++;
		 }	/*	2º if - face 2	*/
		 else if (face == 3){
		 	face3++;
		 }	/*	3º if - face 3	*/
		 else if (face == 4){
		 	face4++;
		 }	/*	4º if - face 4	*/
		 else if (face == 5){
		 	face5++;
		 }	/*	5º if - face 5	*/
		 else{
		 	face6++;
		 }	/*	Fim da condição - face 6	*/
		 
	 }/*	Fim da Repetição	*/
	 
	 printf("A face 1 caiu %d", face1);
	 puts(" por cento daz vezes");
	 
	 printf("A face 2 caiu %d", face2);
	 puts(" por cento daz vezes");
	 
	 printf("A face 3 caiu %d", face3);
	 puts(" por cento daz vezes");
	 
	 printf("A face 4 caiu %d", face4);
	 puts(" por cento daz vezes");
	 
	 printf("A face 5 caiu %d", face5);
	 puts(" por cento daz vezes");
	 
	 printf("A face 6 caiu %d", face6);
	 puts(" por cento daz vezes");
 
 }	/*	Fim do código	*/
