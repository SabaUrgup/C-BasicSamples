#include <stdio.h>
/*
��lemciler

Aritmatik i�lemciler: +, -, *, /, %(mod alma)

�li�kisel ��lemciler: <, >, <=, >=, ==(e�ittir), !=(e�it de�il)
Mant�ksal i�lemciler: !(de�il), &&(AND), ||(VEYA)

Artt�rma Azaltma ��lemcileri: ++, -- 

? i�lemcisi: ko�ul?ifade1: ifade2; 


Ko�ul ve If Yap�lar�
if-else-if
if- if else-else

if(ifade){i�lemsat�rlar�}
else if {i�lem sat�rlar�}
else{i�lem sat�rlar�}

*/

int main(){
int sayi;

printf("100 den buyuk bir sayi giriniz: ");
scanf("%d", &sayi);

if(sayi>100){
	printf("sayiniz100 de b�y�kt�r \n");
	if(sayi%2==0){
		printf("sayiniz �ift bir sayidir \n");
		
		if(sayi<=150){
			printf("sayiniz 100-150 arasindadir");
		}else{ printf("sayiniz150 den b�y�k \n");
		}
		
	}else{ printf("sayiniz tek sayidir ?n");
	}
}else{
	if(sayi==100){
		printf("sayiniz 100 dur \n");
		
	}else{
		printf("sayiniz 100 den kucuk ");
		
	}
}

return 0; 

}


