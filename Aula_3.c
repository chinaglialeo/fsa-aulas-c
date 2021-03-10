#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x;
	int y = 7;
	
	for(x = 0; x <= 10; x = x + 1) {
		printf("%i x %i = %i\n", y, x, y * x);	
	}

}
