#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]) {
	float sayi1, sayi2, sonuc; 
	int islemTuru;
	printf("ilk sayiyi giriniz \n");
	scanf("%f", &sayi1);
	
	printf("ikinci sayiyi giriniz \n");
	scanf("%f", &sayi2);
	
	printf("islemTuru seciniz 1->Toplama 2->Cýkarma 3->Carpma 4->Bolme \n");
	scanf("%d",&islemTuru);
	
	if(islemTuru == 1) {
	 sonuc= sayi1+sayi2;

	}
	
	else if(islemTuru == 2) {
		sonuc= sayi1-sayi2;
	
	}
	else if(islemTuru == 3) {
		sonuc= sayi1*sayi2;
	
	}
	else if(islemTuru == 4) {
		sonuc= sayi1/sayi2;
	
	}
		printf("sonuc: %f", sonuc);
	return 0;
	
		
}
	

