#include <stdio.h>
#include <locale.h>

int main()
{
	// Usar a definição padrão do Sistema
	setlocale(LC_ALL,"");
	printf("A calçada não está ótima!\n");
	return 0;
}