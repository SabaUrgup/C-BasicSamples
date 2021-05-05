#include <stdio.h>
/*
Ýþlemciler

Aritmatik iþlemciler: +, -, *, /, %(mod alma)

Ýliþkisel Ýþlemciler: <, >, <=, >=, ==(eþittir), !=(eþit deðil)
Mantýksal iþlemciler: !(deðil), &&(AND), ||(VEYA)

Arttýrma Azaltma Ýþlemcileri: ++, -- 

? iþlemcisi: koþul?ifade1: ifade2; 


Koþul ve If Yapýlarý
if-else-if
if- if else-else

if(ifade){iþlemsatýrlarý}
else if {iþlem satýrlarý}
else{iþlem satýrlarý}

*/

int main(){
int sayi;

printf("100 den buyuk bir sayi giriniz: ");
scanf("%d", &sayi);

if(sayi>100){
	printf("sayiniz100 de büyüktür \n");
	if(sayi%2==0){
		printf("sayiniz çift bir sayidir \n");
		
		if(sayi<=150){
			printf("sayiniz 100-150 arasindadir");
		}else{ printf("sayiniz150 den büyük \n");
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


