#include <stdio.h>

int main(int argc, char** argv)
{
	int i=26;
	
	if(i<=10)
	{
		printf("Nilai i berada di antara angka 1-10\n");
	}
	else if(i> 10 && i<= 15)
	{
		printf("Nilai i berada di antara angka 11-15\n");
	}
	else if(i> 15 && i<= 20)
	{
		printf("Nilai i berada di antara angka 16-20\n");
	}
	else
	{
		printf("Nilai tidak terdeteksi\n");
	}
	return 0;
}
