#include <stdio.h>


int sayi1=50; //global deðiþken


int main(){

	/*
	int k,m,b;
	
	k=7;
	m=45;
	b=k+m-2;
	
	printf("sonuc= %d \n", b);  //sonucu ekrana yazdýrdýk
	printf("%d %d %d", k, m,b);
	
	*/
	
	
	/*
	
	Statik Deðiþken= Bellekte hemen yer alýrlar program sonlanana kadar bellekteki yerleri deðiþmez.
	
	static int a;
	a=a+2;
	
	
	Dinamik Deðiþkenler= malloc(), calloc(), programýn çalýþtýrýlmasý sýrasýnda oluþturulur.
	
	
	Local Deðiþkenler= tanýmlandýklarý fonksiyon içerisinde ve sadce burada kullanýlýrlar.

	Global Deðiþkenler= program içerisinde yer alan bütün fonksiyonlarýn içerisinde kullanýlýrlar.
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

