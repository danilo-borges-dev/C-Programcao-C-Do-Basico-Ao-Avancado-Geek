#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	float C, F;

	printf("Informe a temperatura em Fahrenheit: ");
	scanf_s("%f", &F);

	C = 5 * (F - 32.0) / 9.0;

	printf("\nA temperatura convertida em Celsius é %.2f\n", C);

	system("pause");

	return 0;
}