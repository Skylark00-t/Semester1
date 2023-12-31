#include <stdio.h>
#define kasur 5
int main()
{
	char nama [100];
	int bantal,guling,selimut,sprei;
	int ttlbantal,ttlguling,ttlselimut,ttlsprei,ttlkasur;
	int total;
	
	printf("---SELAMAT DATANG DI TOKO JAYA MUDA--- \n");
	//("---SEMOGA BELANJA DENGAN BAHAGIA--- \n");//
	
	
	printf("Masukkan nama anda : ");
	gets(nama);
	
	printf("\nHai %s\n", nama);
	printf("Daftar barang :\n");
	
	printf("bantal \t\t Rp. 10.000 \n");
	printf("guling \t\t Rp. 15.000 \n");
	printf("selimut\t\t Rp. 50.000 \n");
	printf("sprei  \t\t Rp. 75.000 \n");
	printf("kasur  \t\t Rp. 100.000 \n");
	
	printf("\nBarang apa yang ingin anda beli? \n");
	
	printf("bantal\t: ");
	scanf("%d", &bantal);
	
	printf("guling\t: ");
	scanf("%d", &guling);
	
	printf("selimut\t: ");
	scanf("%d", &selimut);
	
	printf("sprei\t: ");
	scanf("%d", &sprei);
	
	printf("kasur\t: ");
	
	
	
	printf("\n\n ------ Rincian Pembelian ------\n");
	
	ttlbantal = 10000 * bantal;
	ttlguling = 15000 * guling;
	ttlselimut = 50000 * selimut;
	ttlsprei = 75000 * sprei;
	ttlkasur = 100000 * kasur;
	
	total = ttlbantal + ttlguling + ttlselimut + ttlsprei + ttlkasur;
	
	printf("bantal\t: %d = Rp. %d \n", bantal, ttlbantal);
	printf("guling\t: %d = Rp. %d \n", guling, ttlguling);
	printf("selimut\t: %d = Rp. %d \n", selimut, ttlselimut);
	printf("sprei\t: %d = Rp. %d \n", sprei, ttlsprei);
	printf("kasur\t: %d = Rp. %d \n", kasur, ttlkasur);
	
	
	printf("\nTotal pembelanjaan keseluruhan anda \t: Rp. %d\n\n", total);
	printf("Terima kasih telah berbelanja di Toko Kami.....\n");
	
	return 0;
	
	
}