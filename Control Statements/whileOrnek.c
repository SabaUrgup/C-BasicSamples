#include <stdio.h>

int main(){

int id=1;
char cd;

while(id<=5){
	
	cd='A';
	while(cd<='K'){
		printf("%c",cd++);
		
	}

	printf("\n");
	id++;
}
return 0;
}
