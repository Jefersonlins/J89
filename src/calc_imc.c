/*
 ============================================================================
 Name        : calc_imc.
 Author      : Jeferson Lins, Duayne Santos
 Version     : 0.0.1
 Copyright   : Alianca Sistemas
 Description : Programa para calcular IMC
 ============================================================================
 */

#include <stdio.h>
#include <string.h>

int main ()
{
	char nome[100];

	printf ("Bem vindo a calculadora de IMC. \n\n");
	printf ("Digite seu nome: ");
	scanf ("%s", &nome);
	printf ("\n Seu nome e: %s\n", nome);
	system ("pause");
	return 0;
}
