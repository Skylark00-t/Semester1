#include <stdio.h>
int menu,kode,angka,harga;

void pilih_menu(){
	printf("\n---------------------------------------\n");
	printf("Anda ingin memesan apa? \n");
	printf("1. Makanan\n");
	printf("2. Minuman\n");
	printf("3. keluar dari program\n");
	printf("Jawab: ");
	scanf("%d", &menu);
	printf("\n-----------------------------------------\n");
}

int makanan(){
	printf("===== Menu Makanan =====");
	printf("\n1. Bakso");
	printf("\n2. Mie Ayam");
	printf("\n3. Nasi Goreng");
	printf("\n4. Ayam Geprek");
	printf("\n5. Soto");
	printf("\nMasukkan kode pesanan anda: ");
	scanf("%d", &kode);
	printf("\nMasukkan jumlah pesanan anda: ");
	scanf("%d", &angka);
	printf("\nMasukkan harga makanan: ");
	scanf("%d", &harga);
	return(angka * harga);
}

int minuman(){
	printf("===== Menu Minuman =====");
	printf("\n1. Teh");
	printf("\n2. Jus Buah");
	printf("\n3. coffee");
	printf("\n4. Es Campur");
	printf("\n5. Dawet");
	printf("\nMasukkan kode pesanan anda: ");
	scanf("%d", &kode);
	printf("\nMasukkan harga minuman: ");
	scanf("%d", &harga);
	printf("\nMasukkan jumlah pesanan anda: ");
	scanf("%d", &angka);
	return(angka * harga);	
}


int main(){
	printf("\t\t===================================================\n");
	printf("\t\t         Welcome to Nusantara Food                  \n");
	printf("\t\t====================================================\n");
	pilih_menu();
	while(menu != 3){
		if(menu == 1){
			printf("\nTotal pesanan makanan anda adalah %d * %d = %d ",angka,harga,makanan());
		}else if(menu == 2){
			printf("\nTotal pesanan minuman anda adalah %d * %d = %d ",angka,harga,minuman());
		}
		pilih_menu();
		}
		printf("\n\nKeluar Program -end-\n");
	   	return 0;
	}



