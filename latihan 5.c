#include <stdio.h>
int menu,angka;

void pilih_menu(){
	printf("\n---------------------------------------\n");
	printf("Ubah celcius ke : \n");
	printf("1. fahrenheit\n");
	printf("2. reamur\n");
	printf("3. kelvin\n");
	printf("4. keluar dari program\n");
	scanf("%d", &menu);
	printf("\n-----------------------------------------\n");
}

int fahrenheit(){
	printf("Masukkan angka: ");
	scanf("%d", &angka);
	return (1.8 * angka + 32);
}

int reamur(){
	printf("Masukkan angka: ");
	scanf("%d", &angka);
	return (0.8 * angka);
}

int kelvin(){
	printf("Masukkan angka: ");
	scanf("%d", &angka);
	return (angka + 273);
}

int main(){
	printf("\t\t===================================================\n");
	printf("\t\t                Konversi suhu                      \n");
	printf("\t\t====================================================\n");
	pilih_menu();
	while(menu != 4){
		if(menu == 1){
			printf("Hasil konversi suhu adalah 9 / 5 * %d + 32 = %d\n", angka,fahrenheit());
		}else if(menu == 2){
			printf("Hasil konversi suhu adalah 4 / 5 * %d = %d\n", angka,reamur());
		}else if(menu == 3){
			printf("Hasil konversi suhu adalah %d + 273 = %d\n", angka,kelvin());
		}
		pilih_menu();
		}
		printf("\n\nKeluar Program -end-");
	   	return 0;
	}
