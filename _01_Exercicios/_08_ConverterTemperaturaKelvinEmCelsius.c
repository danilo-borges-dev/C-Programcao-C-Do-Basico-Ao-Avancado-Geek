#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	float C, K;

	printf("Informe a temperatura em Kelvin: ");
	scanf_s("%f", &K);

	C = K - 273.15;

	printf("\nA temperatura em Celsius é: %f\n", C);

	system("pause");

	return 0;
}