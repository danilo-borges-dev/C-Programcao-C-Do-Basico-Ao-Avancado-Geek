#include <stdio.h>
#include <locale.h>

int main ()
{
	// Fa�a um programa que leia e imprima um n�mero real.

	setlocale(LC_ALL, "Portuguese");

	float number;

	printf("Informe um n�mero real: ");
	scanf("%f", &number);

	printf(" ");

	printf("N�mero: %f", number);

	return 0;
}
