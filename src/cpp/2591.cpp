#include <stdio.h>
#include <string.h>

void kameHame(char *, char *);

int main () {
	unsigned short casos;
	char palavra[201], saida[100000];

	scanf("%hu", &casos);

	while (casos--) {

		scanf(" %s", palavra);

		// Para não perder tempo, caso a string de entrada seja a string base "hamekame"
		// a resposta será apenas "ka" sem precisar chamar a função que resolve isso;
		if (strcmp(palavra, "hamekame") == 0)
			printf("ka\n");
		else {
			kameHame(palavra, saida);
			printf("%s\n", saida);
		}
	}
	
	return 0;
}

void kameHame(char *str, char *str2) {
	unsigned short contador = 0, aux;

	*(str2++) = 'k'; str++;
	
	while (*str == 'a') {
		str++;
		contador++;
	}

	while (*str != 'a')
		str++;
		
	if (contador == 1) {
		while (*str == 'a')
			*(str2++) = *(str++);

		*str2 = '\0';

	} else {	
		while (*str == 'a') {	
			aux = contador;
			while (aux-- > 0)
				*(str2++) = 'a';
				
			str++;
		}
	}

	*str2 = '\0';
}
