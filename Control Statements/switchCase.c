#include <stdio.h>

/*switch-case yap�s�

switch(ifade){
	 case sabiti1:
	 	i�lem sat�rlar�
		 break;
	 case sabiti2:
	 	i�lem sat�rlar�
		 break;
		 ....
		 
	default:
		 i�lem sat�rlar�;
		 }
		 
*/

int main(){
	
	char cd;
	
	printf("Verilen harflerden birini giriniz: [A] [B] [C]");
	
	cd=toupper(getch()); //getch() fonksiyorunu girilen de�eri ekrana al�r ama ekranda g�stermez.
	printf("\n");
	
	switch(cd){
		
		case 'A':
			printf("A harfini girdiniz!");
			break;
			
		case 'B':
			printf("B harfini girdiniz!");
			break;
			
		case 'C':
			printf("C harfini girdiniz!");
			break;			
			
		default:
		printf("istenen harflerden birini girmediniz.");	
			
	}
}
