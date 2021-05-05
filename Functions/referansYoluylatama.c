#include<stdio.h>

void fonk1(int *id1);

int main(){
	
int id1;
	id1=40;

	fonk1(&id1);
	
	printf("main () fonksiyonu icerisindeki id1 degeri: %d", id1);
	
	
}

void fonk1(int *id1){
	
	*id1=(*id1)+27;
	printf("fon1 fonksiyonunun icerisindeki id1 degeri: %d", *id1);
}
