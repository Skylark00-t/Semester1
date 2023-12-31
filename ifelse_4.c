#include <stdio.h>

int main(int argc, char** argv)
{
	char grade = 'D';
	
	switch (grade){
		case 'A' :
			printf("Sangat Baik\n");
			break;
		case 'B' :
			printf("Baik\n");
			break;
		case 'C' :
			printf("Rata-rata\n");
			break;
		case 'D' :
			printf("Rendah\n");
			break;
		case 'E' :
			printf("Sangat Rendah\n");
			break;
		default :
			printf("Nilai tidak ada\n");
			break;
	}
	printf("Nilai anda adalah %c\n", grade);
	
	return 0;
}