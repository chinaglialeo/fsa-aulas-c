#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	double i = 0;
	double j = 0;
	
	printf("Digite um valor: ");
	scanf("%lf", &i);
	
	printf("Digite outro valor: ");
	scanf("%lf", &j);
	
	printf("%.2lf + %.2lf = %.2lf", i, j, i+j);
}
