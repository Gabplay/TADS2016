#include <stdio.h>
int main() {
	char str1[100],str2[100];
	printf ("Entre com uma string: ");
	gets (str1);
	printf ("\n\nEntre com outra string: ");
	gets (str2);
	if (strcmp(str1,str2))
		printf ("\n\nAs duas strings são diferentes.\n");
	else 
		printf ("\n\nAs duas strings são iguais.\n");
    return(0);
}