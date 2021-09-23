
#include <stdio.h>

int main()
{
	char telefono[15], telefono2[15];
	int i, j;
	char c = '\0';

	printf_s("Escriba un numero: ");
	gets_s(telefono);

	for (i = 0, j = 0; i < 15; i++) {
		
		if (telefono[i] == ' ')
		{
		}
		else
		{
		c = telefono[i];
		telefono2[j] = c;
		j++;
		}

	}
	printf("Telefono sin espacios: %s", telefono2);
}
