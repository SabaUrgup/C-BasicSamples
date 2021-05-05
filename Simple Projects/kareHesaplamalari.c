#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int kenar, alan, cevre;
	printf("Bir sayi giriniz... \n");
	scanf("%d", &kenar);
	alan = kenar*kenar;
	cevre = kenar*4;
	printf("Alan: %d \n", alan);
	printf("Cevre: %d \n", cevre);
	return 0;
}
