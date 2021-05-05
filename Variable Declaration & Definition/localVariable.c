#include <stdio.h>

int main (){
	
	int id3=5;
	int id4;
	if(id3>0){
		id4=id3*5;
		printf("id3: %d id4: %d \n", id3, id4 );
	}


	int id1=16; //main() fonk içerisinde gerçerli

	if(id1>10){
		int id1=12; //kod bloðu içerisinde geçerli
		printf("Kod blogu icindeki id1: %d ", id1);
		
	}	
		printf(" Fonksiyon icerisindeki id1: %d",id1);
}

// id2 ye buradan iletiþim saðlanamaz çümkü lokal bir deðiþken.
