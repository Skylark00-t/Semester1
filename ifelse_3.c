#include <stdio.h>

int main(int argc, char** argv)
{
	int nilai;
	
	printf("Masukkan nilai anda: ");
	scanf("%d", &nilai);
	
	if(nilai>=75)
	{
		printf("Anda lulus dengan nilai %d", nilai);
	}
	else if(nilai<75 && nilai>=50)
	{
		printf("Anda mengikuti remedial");
	}
	else
	{
		printf("Anda mengulang di semester depan");
	}
	return 0;
}