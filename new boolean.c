#include <stdio.h>
#include <stdbool.h>

int main(int argc, char** argv)
{
	bool penutup;
	char jawab;
	
	printf("Bagaimana perasaan anda setelah belanja disini: ");
	scanf("%s", &jawab);
	penutup = jawab;
	
	if(penutup)
	{
		printf("Terima Kasih Atas Ulasan Anda");
	}
	
	return 0;
}