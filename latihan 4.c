#include <stdio.h>

int main(int argc, char** argv)
{
	char namapanggilan[100];
	char asalkota[100];
	
	printf("Masukkan nama panggilan anda: ");
	scanf("%s", &namapanggilan);
	
	printf("Masukkan asal kota anda: ");
	scanf("%s", &asalkota);
	
	printf("Hallo %s\n", namapanggilan);
	printf("Anda berasal dari kota %s", asalkota);
	
	return 0;
}