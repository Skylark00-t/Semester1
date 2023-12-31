#include <stdio.h>

int main(int argc, char** argv)
{
	int bil1,bil2,bil3,bil4,bil5,rata;
	
	printf("Masukkan angka: ");
	scanf("%d", &bil1);
	printf("Masukkan angka: ");
	scanf("%d", &bil2);
	printf("Masukkan angka: ");
	scanf("%d", &bil3);
	printf("Masukkan angka: ");
	scanf("%d", &bil4);
	printf("Masukkan angka: ");
	scanf("%d", &bil5);
	
	rata=(bil1+bil2+bil3+bil4+bil5)/5;
	printf("Rata-rata adalah %d",rata);
	
	return 0;
}