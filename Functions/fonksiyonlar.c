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
					iþlem satýrlarý;
					
					
					iþlem satýrlarý;
					
					
			return ifade;
	}
	
	
	
	void fonksiyon_adi(void){iþlem satýrlarý;}
	
	Fonksiyon Bildirimi: fonksiyon veri tipinin ve parametrelerinin baþýnda belirlenmesi gerekiyor ve buna fonk. bildirimi denir.
	
	
	veri_tipi fonk_adi(veri_tipi parametre1, veri_tipi parametre2, ... )
	
	*/
	

