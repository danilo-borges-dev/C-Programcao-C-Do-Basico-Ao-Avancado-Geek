#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	float number;

	printf("Informe um número real: ");
	scanf_s("%f", &number);

	printf("\nA quinta parte deste número é %.2f", number / 5);

	return 0;
}