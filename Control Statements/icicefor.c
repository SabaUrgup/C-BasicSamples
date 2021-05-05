#include <stdio.h>
//iç içe for örneði

int main(){
	
	int i, j;
	
	for(i=0; i<5;i++){
		
		for(j=0;j<=10;j++){
			printf("%d",j);
			printf("\n");
		}
	}
	return 0;
}
