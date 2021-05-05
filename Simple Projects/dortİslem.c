#include <stdio.h>

int main(){
	
	int sayi1=50, sayi2=60, islemTuru;
	
	printf("1, sayi:%d\n 2. sayi:%d\n", sayi1, sayi2);
	printf("[1]. Toplama\n [2], Cikarma\n [3]. Carpma\n [4]. Bolme\n");
	printf("islem turunu giriniz:");
	scanf("%d", &islemTuru);
	
	if(islemTuru==1){
		printf("Toplam: %d",sayi1+sayi2);
	}
	
	else if(islemTuru==2){
		printf("Cikarma: %d",sayi1-sayi2);
	}
	
	else if(islemTuru==3){
		printf("Carpma: %d",sayi1*sayi2);
	}
	
	else if(islemTuru==4){
		printf("Bolme: %d",sayi1/sayi2);
	}
	
	else{
		printf("girdiginiz islem turu bir secenek degil!!");
	}
}

