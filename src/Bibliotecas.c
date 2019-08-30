/*
 ============================================================================
 Name        : Bibliotecas.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#define EXIT_ERROR -1

int main(void) {

	int resultado;

	if(getChar("Edad \n","Error \n",&resultado,150,0,2)==0)
	{
	printf("Resultado: %d",resultado);
	}

	return EXIT_SUCCESS;
}
