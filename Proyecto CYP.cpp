/*****************************************************************************************************************
	UNIVERSIDAD NACIONAL AUTONOMA DE MEXICO
	FACULTAD DE ESTUDIOS SUPERIORES -ARAGON-

	Computadoras y programacion.
	(c)
	Quiso decir: Programa principal de la aplicacion de la distancia de Levenstein.

******************************************************************************************************************/


#include "stdafx.h"
#include <string.h>
#include "corrector.h"
#include <stdlib.h>
#include <ctype.h>
#define LONGITUD 32
char abecedario[LONGITUD + 6] = "abcdefghijklmnñopqrstuvwxyzáéíóú";

//Funciones publicas del proyecto
/*****************************************************************************************************************
	DICCIONARIO: Esta funcion crea el diccionario completo
	char *	szNombre				:	Nombre del archivo de donde se sacaran las palabras del diccionario
	char	szPalabras[][TAMTOKEN]	:	Arreglo con las palabras completas del diccionario
	int		iEstadisticas[]			:	Arreglo con el numero de veces que aparecen las palabras en el diccionario
	int &	iNumElementos			:	Numero de elementos en el diccionario
******************************************************************************************************************/
void Diccionario(char* szNombre, char szPalabras[][TAMTOKEN], int iEstadisticas[], int& iNumElementos)
{
	/*
	//Sustituya estas lineas por su código
	iNumElementos = 1;
	strcpy(szPalabras[0], "AquiVaElDiccionario");
	iEstadisticas[0] = 1; // la primer palabra aparece solo una vez.*/

	/* Variable de archivo*/
	FILE* fp;
	iNumElementos = 0;

	/*Variable = i*/
	int i;
	

	/*Variables para que usaremos para guardar los datos */
	char lectura, array[TAMTOKEN];

	/*Aca era el problema*/
	//Para iniciar el arreglo de estadisticas.
	for (i = 0; i < NUMPALABRAS; i++)
		iEstadisticas[i] = 0;

	/*Se abre el archivo en modo lectura*/
	fopen_s(&fp, szNombre, "r");

	/*Variable */
	int contador = 0;

	/*Variable para el puntuacion <<Esto nos servira para conocer las palabras>> */
	char puntuacion[] = " \t\n\r.,;() ";

	//char puntuacion2[] = { ',',';','.','(',')',9,10,13,32 } ;

	/*Comprobamos que de verdad abrio*/
	if (fp == NULL)
		return;


