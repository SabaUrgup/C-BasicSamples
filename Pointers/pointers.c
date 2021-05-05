#include<stdio.h>


int main(){
	
	/* Pointer(iþaretçiler): bilgisayar belleðindeki belli bir adresi gösteren ve gösterdiði bellek adresine eriþimi saðlayan deðiþkenlerdir.
	
	veri_tipi *degisken_adi -> tanýmlama þekli
	
	& : bellek adrasi atamak için kullanýlýr. hangi deðiþkenden önce kullanýlýrsa o deðiþkenin adresini verir. 
	
	* : Hangi deðiþkenden önce kullanýlýrsa o iþaretçi deðiþkene adresi atanan deðiþkenin deðerini verir.
	
	*/	
	
	
	int *ip, id;
	
	id=250;
	ip=&id;  // id nin bellek adresi ip ye atandý
	
	printf("id degisken degeri: %d \n", id);  // id degerinin doðrudan yazýlmasý
	
	printf("id degisken degeri: %d \n", *ip);  // id degerinin dolaylý yazýlmasý
	
	printf("id degiskenin bellek adresi: %p \n", ip); // id degiskeninin bellek adresinin pointer yoluyla yazýlmasý
	
	printf("id degiskenin bellek adresi: %p", &id); // id degiskeninin bellek adresinin & iþlemcisi ile yazýlmasý
}
