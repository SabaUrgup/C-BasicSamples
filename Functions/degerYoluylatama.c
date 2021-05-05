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


// bir fonksiyona argüman olarak geçirilen deðerlere, fonksiyon içinde yapýlan deðiþikliklerin fonk. çalýþmasý sona erdikten sonra, prpgrama geçerli olmasýný istiyorsak referans yoluyla tanýmlama yapýyoruz. Aksi takdirde deger yoluyla atama yapýyoruz.



