#include <stdio.h>
#include <locale.h>

int main ()
{
	// Faça um programa que leia e imprima um número real.

	setlocale(LC_ALL, "Portuguese");

	float number;

	printf("Informe um número real: ");
	scanf("%f", &number);

	printf(" ");

	printf("Número: %f", number);

	return 0;
}
