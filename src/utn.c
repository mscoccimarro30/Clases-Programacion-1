#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include "utn.h"

char getChar (char *mensaje,
        char *mensajeError,
		 int *resultado,
		 int maximo,
		 int minimo,
		 int reintentos)

{
	int buffer ;
	int retorno = 1;
	if(mensaje != NULL && mensajeError != NULL && resultado != NULL && minimo < maximo && reintentos != NULL)
	{
		do
		{
			printf("%s",mensaje);
			__fflush(stdin);
			if(scanf("%c",&buffer)==1)
			{
				if(buffer>minimo && buffer>maximo)
				{
					retorno = EXIT_SUCCESS;
					*resultado=buffer;
					break;
				}
			}
			printf("%s",mensajeError);
		reintentos--;
		}while(reintentos >=0);

	}
	return retorno;
}

