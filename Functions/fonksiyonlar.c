#include <stdio.h>
#include <stdlib.h>

float fonk1(float fd1);

int main(int argc, char *argv[]) {
	
	float fd1;
	fd1=12.75;
	printf("%f", fonk1(fd1));	
	
	
	
	
	return 0;
}
	
	float fonk1(float fd1){
		return 10*fd1;
	}
	
	
	
	/*veri_tipi fonksiyon_adi(parametreler){
					i�lem sat�rlar�;
					
					
					i�lem sat�rlar�;
					
					
			return ifade;
	}
	
	
	
	void fonksiyon_adi(void){i�lem sat�rlar�;}
	
	Fonksiyon Bildirimi: fonksiyon veri tipinin ve parametrelerinin ba��nda belirlenmesi gerekiyor ve buna fonk. bildirimi denir.
	
	
	veri_tipi fonk_adi(veri_tipi parametre1, veri_tipi parametre2, ... )
	
	*/
	

