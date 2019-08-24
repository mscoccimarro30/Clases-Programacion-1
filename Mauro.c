/*
 ============================================================================
 Name        : Mauro.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	  int dinero;
	  char tipo; //Dolar, Peso, Real
	   int dineroMayor;
	  int primerDolar=1;
	 int contador =0;
	int retorno = 1;
    int acomulador=0;
int contadorPositivos=0;
    while(contador<4){

		  printf("Ingrese el monto \n");
	 scanf("%d", &dinero);

	 printf("Ingrese el tipo de Moneda d , p o r \n");
	 fflush(stdin);
	 scanf("%c",&tipo);


	 if (tipo == 'd')
	 {
	 if(primerDolar==1)
	{
		dineroMayor=dinero;
		primerDolar=0;
	}else

	{
		if (dinero>dineroMayor)
		dineroMayor=dinero;
	}
	  if (dinero>0)
	 {
		 acomulador = acomulador + dinero;
		 contadorPositivos++;
	 }
	 }


	contador++;
	}

	if(primerDolar==1)
	{
	printf("No ingreso  dolares ");
	}else
	{
	printf("El mayor valor de dolar es: %d ", dineroMayor );
	printf("El promedio de los positivos es %d",acomulador /contador );
	}

return retorno;
}

