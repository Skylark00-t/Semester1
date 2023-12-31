#include <stdio.h>

int main() {
	int i, range, integer, hasil;
	
	printf("enter an integer : ");
	scanf("%d", &integer);
	printf("enter a range : ");
	scanf("%d", &range);
	for (i = 1; i< 4; ++i)
	{
		hasil = integer*i;
		printf("%d*%d=%d \n", integer, range, hasil);
	}
	return 0;
}

/* nama : Wahyu Lukytaningtyas
NIM : 202210370311413*/