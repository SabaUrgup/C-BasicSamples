#include<stdio.h>


int main(){
	
	/* Pointer(i�aret�iler): bilgisayar belle�indeki belli bir adresi g�steren ve g�sterdi�i bellek adresine eri�imi sa�layan de�i�kenlerdir.
	
	veri_tipi *degisken_adi -> tan�mlama �ekli
	
	& : bellek adrasi atamak i�in kullan�l�r. hangi de�i�kenden �nce kullan�l�rsa o de�i�kenin adresini verir. 
	
	* : Hangi de�i�kenden �nce kullan�l�rsa o i�aret�i de�i�kene adresi atanan de�i�kenin de�erini verir.
	
	*/	
	
	
	int *ip, id;
	
	id=250;
	ip=&id;  // id nin bellek adresi ip ye atand�
	
	printf("id degisken degeri: %d \n", id);  // id degerinin do�rudan yaz�lmas�
	
	printf("id degisken degeri: %d \n", *ip);  // id degerinin dolayl� yaz�lmas�
	
	printf("id degiskenin bellek adresi: %p \n", ip); // id degiskeninin bellek adresinin pointer yoluyla yaz�lmas�
	
	printf("id degiskenin bellek adresi: %p", &id); // id degiskeninin bellek adresinin & i�lemcisi ile yaz�lmas�
}
