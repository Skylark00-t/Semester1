#include <stdio.h>

int main(int argc, char** argv)
{
	int x;
	
	printf("Kamu pilih aku atau dia:\n1. Aku\n2. Dia");
	printf("\nJawab: ");
	scanf("%d", &x);
	
	if(x == 1){
		printf("Love youuuu <3\n");
	}else{
		printf("Hmm yaudah deh gapapa:)\n");
	}
	return 0;
}