#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	float number;

	printf("Informe um n�mero real: ");
	scanf_s("%f", &number);

	printf("\nA quinta parte deste n�mero � %.2f", number / 5);

	return 0;
}