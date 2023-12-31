# include <stdio.h>

int main(int argc, char** argv)
{
	int input;
	char jawab;
	
	do{
		printf("Masukkan angka: ");
		scanf("%d", &input);
		fflush(stdin);
		printf("Continue?(y/n) : ");
		scanf(" %c", &jawab);
	}while(jawab == 'Y' || jawab == 'y');
	
	return 0;
}