#include <stdio.h>

/*switch-case yapýsý

switch(ifade){
	 case sabiti1:
	 	iþlem satýrlarý
		 break;
	 case sabiti2:
	 	iþlem satýrlarý
		 break;
		 ....
		 
	default:
		 iþlem satýrlarý;
		 }
		 
*/

int main(){
	
	char cd;
	
	printf("Verilen harflerden birini giriniz: [A] [B] [C]");
	
	cd=toupper(getch()); //getch() fonksiyorunu girilen deðeri ekrana alýr ama ekranda göstermez.
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
