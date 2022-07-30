#include <stdio.h>

/* Fazer um programa para ler dois números inteiros, e dizer se um número é múltiplo do outro. Os
números podem ser digitados em qualquer ordem. */

int main(){
	
	int x, y;
	
	printf("Digite dois numeros inteiros: ");
	scanf("%d %d", &x, &y);	
	
	
	if (x % y == 0 || y % x == 0){
		printf("Sao multiplos");
	} else {
		printf("Nao sao multiplos");
	}
	
	return 0;
}
