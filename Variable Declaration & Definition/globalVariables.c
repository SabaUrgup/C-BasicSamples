#include <stdio.h>


int sayi1=50; //global değişken


int main(){

	/*
	int k,m,b;
	
	k=7;
	m=45;
	b=k+m-2;
	
	printf("sonuc= %d \n", b);  //sonucu ekrana yazdırdık
	printf("%d %d %d", k, m,b);
	
	*/
	
	
	/*
	
	Statik Değişken= Bellekte hemen yer alırlar program sonlanana kadar bellekteki yerleri değişmez.
	
	static int a;
	a=a+2;
	
	
	Dinamik Değişkenler= malloc(), calloc(), programın çalıştırılması sırasında oluşturulur.
	
	
	Local Değişkenler= tanımlandıkları fonksiyon içerisinde ve sadce burada kullanılırlar.

	Global Değişkenler= program içerisinde yer alan bütün fonksiyonların içerisinde kullanılırlar.
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

