#include<stdio.h>

void fonk1(int id1);

int main(){
	
int id1;
	id1=34;
	printf("main fonksiyonu icerisindeki id1 degeri: %d", id1);
	
	
}

void fonk1(int id1){
	id1=id1+20;
	printf("fon1 fonksiyonunun icerisindeki id1 degeri: %d", id1);
}


// bir fonksiyona arg�man olarak ge�irilen de�erlere, fonksiyon i�inde yap�lan de�i�ikliklerin fonk. �al��mas� sona erdikten sonra, prpgrama ge�erli olmas�n� istiyorsak referans yoluyla tan�mlama yap�yoruz. Aksi takdirde deger yoluyla atama yap�yoruz.



