#include <stdio.h>

/* Fazer um programa para ler dois n�meros inteiros, e dizer se um n�mero � m�ltiplo do outro. Os
n�meros podem ser digitados em qualquer ordem. */

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
