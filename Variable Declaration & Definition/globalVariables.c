#include <stdio.h>


int sayi1=50; //global de�i�ken


int main(){

	/*
	int k,m,b;
	
	k=7;
	m=45;
	b=k+m-2;
	
	printf("sonuc= %d \n", b);  //sonucu ekrana yazd�rd�k
	printf("%d %d %d", k, m,b);
	
	*/
	
	
	/*
	
	Statik De�i�ken= Bellekte hemen yer al�rlar program sonlanana kadar bellekteki yerleri de�i�mez.
	
	static int a;
	a=a+2;
	
	
	Dinamik De�i�kenler= malloc(), calloc(), program�n �al��t�r�lmas� s�ras�nda olu�turulur.
	
	
	Local De�i�kenler= tan�mland�klar� fonksiyon i�erisinde ve sadce burada kullan�l�rlar.

	Global De�i�kenler= program i�erisinde yer alan b�t�n fonksiyonlar�n i�erisinde kullan�l�rlar.
	*/
	
	
	int id;
	
	id=5;
	printf("%d \n", id);
	
	fonk1();
    fonk2();
	
}

fonk1(){
	int id;
	id=25;
	printf("%d \n", id);
}

fonk2(){
	int id;
	id=54;
	printf("%d", id);
}

