// Leia um n�mero real e imprima o resultado do quadrado desse n�mero.

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	float number;

	printf("Informe um valor real: ");
	scanf("%f", &number);

	printf(" ");

	printf("\nO Quadrado deste n�mero �: %.2f\n", pow(number, 2));
	system("pause");

	return 0;
}
