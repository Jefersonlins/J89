/*
 ============================================================================
 Name        : calc_imc.
 Author      : Jeferson Lins, Duayne Santos
 Version     : 0.0.1
 Copyright   : Alianca Sistemas
 Description : Programa para calcular IMC
 ============================================================================
 */
#include "calc_imc.h"

int main ()
{
      char nome[100];
      float peso;
      float altura;

      nome[100] = p_perguntas ();
      peso = s_perguntas();
      altura = t_perguntas();
      printf ("seu nome e': %s\nseu peso e': %f\nsua altura e': %f\n", nome, peso, altura);
      //system ("pause");
      return 0;
}

char p_perguntas ()
{
      char n[100];
      printf ("Bem vindo a calculadora de IMC. \n\n");
      printf ("Digite seu nome: ");
      scanf ("%s", &n);
      return n;
}

float s_perguntas ()
{
      float p;

      printf ("\nDigite seu peso: ");
      scanf ("%f",&p);
      return p;
}

float t_perguntas ()
{
      float a;

      printf ("\nDigite sua autura: ");
      scanf ("%f", &a);
      return a;
}
