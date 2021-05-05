#include <stdio.h>
#include <stdlib.h>  //rand fonksiyonu için kütüphaneyi include ettik
#include<time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]) {

//taþ>makas, makas>kaðýt, kaðýt>taþ


	srand(time(NULL));   //her defasýnda ayný sayýyý üretmemesi için time fonksiyonu kullanýldý


	int i=0, tahmin;
	int kullaniciSkor=0,bilgisayarSkor=0;
	
	while(i<5){
		
		printf("Lutfen tahmininizi giriniz: (1. tas, 2.kagit, 3.makas)\n");
		scanf("%d", &tahmin);
		
		int bilgisayarTahmini=(rand()%3)+1;
		
		if(tahmin==1){
			
			if(bilgisayarTahmini==3){
				kullaniciSkor++;
				printf("kazandýnýz! \n");
			}else if (bilgisayarTahmini==2){
			bilgisayarSkor++;
			printf("kaybettiniz! \n");
		}
		
		else if (bilgisayarTahmini==1){
			printf("Berabere! \n");
		} 
		
		}
		
		else if (tahmin==2){
			
			if(bilgisayarTahmini==3){
				kullaniciSkor++;
				printf("kaybettiniz! \n");
			}else if (bilgisayarTahmini==2){
			bilgisayarSkor++;
			printf("kazandiniz! \n");
		}
		else if (bilgisayarTahmini==1){
			printf("Berabere! \n");
		} 
		
		
	
		
		}
		
		else if (tahmin==3){
			
			if(bilgisayarTahmini==3){
				kullaniciSkor++;
				printf("kaybettiniz! \n");
			}else if (bilgisayarTahmini==2){
			bilgisayarSkor++;
			printf("kazandiniz! \n");
		}
		else if (bilgisayarTahmini==1){
			printf("Berabere! \n");
		} 
		
		
		
		}
		else{
			printf("kural diþi tahmin girisi! \n");
	}
	
	i++;
	
}
printf("Kullanici %d - %d Bilgisayar", kullaniciSkor, bilgisayarSkor);
	return 0;
	
	
	
	
}
	
