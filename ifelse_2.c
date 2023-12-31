#include <stdio.h>

int main(int argc, char** argv)
{
	int nilai;
	
	printf("Masukkan nilai anda: ");
	scanf("%d", &nilai);
	
	if(nilai>= 60)
	{
		printf("Anda lulus dengan nilai: %d", nilai);
	}
	else
	{
		printf("Maaf anda tidak lulus");
	}
	return 0;
}