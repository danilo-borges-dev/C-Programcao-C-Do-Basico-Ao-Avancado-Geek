//Conversao de Temperatura em graus Celsius em Fahrenheit

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	float C, F;

	printf("Informe a temperatura em graus Celsius: ");
	scanf_s("%f", &C);

	F = C * (9.0 / 5.0) + 32.0;

	printf("\nA temperatura em Fahrenheit é %.2f\n", F);

	system("pause");

	return 0;
}