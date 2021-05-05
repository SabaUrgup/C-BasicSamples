#include <stdio.h>

int main(){
	
	int id1, id2, id3, id4;
	
	id1=70;
	id2=35;
	
	id3=(id1>id2) ? id1-id2:id1+id2;
	
	if(id1>id2)
	{
		id4=id1-id2;
		printf("%d %d",id3, id4);
	}
	else{
		id4=id1+id2;
		
		printf("%d %d",id3, id4);
	}
	
	return 0;
}

