#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int number;
	printf("Informe um n�mero inteiro: ");
	scanf("%d", &number);

	printf(" ");

	printf("\nN�mero: %d", number, "\n");
	return 0;
}
