#include <stdio.h>
#define diskon 0.5 //konstanta

int main(int argc, char** argv)//fungsi
{
	char nama[100];
	int gelang,anting,bandana,kalung,cincin;
	int ttlgelang,ttlanting,ttlbandana,ttlkalung,ttlcincin;
	int uang,kembalian,kekurangan,total;
	
	
	printf("----WELCOME TO ROSELIA STORE---- \n");
	printf("Toko yang menjual segala macam aksesoris untuk berbagai keperluan");
	printf("\nMasukkan nama anda : ");
	gets(nama);
	
	printf("\nHallo %s\n", nama);
	printf("Semoga harimu berjalan dengan baik hari ini");
	printf("\nDaftar aksesoris :\n");
	
	printf("gelang \t\t Rp. 5.000 \n");
	printf("anting \t\t Rp. 10.000 \n");
	printf("bandana\t\t Rp. 25.000 \n");
	printf("kalung\t\t Rp. 20.000 \n");
	printf("cincin\t\t Rp. 15.000 \n");
	
	printf("\nRincian Pembelian\n");
	
	printf("gelang\t: ");
	scanf("%d", &gelang);
	
	printf("anting\t: ");
	scanf("%d", &anting);
	
	printf("bandana\t: ");
	scanf("%d", &bandana);
	
	printf("kalung\t: ");
	scanf("%d", &kalung);
	
	printf("cincin\t: ");
	scanf("%d", &cincin);
	
	
	ttlgelang = 5000 * gelang;
	ttlanting = 10000 * anting;
	ttlbandana = 25000 * bandana;
	ttlkalung = 20000 * kalung;
	ttlcincin = 15000 * cincin;
	
	printf("\n\nMasukan Uang tunai : Rp. ");
	scanf("%d",&uang);

	total= (ttlgelang + ttlanting + ttlbandana + ttlkalung + ttlcincin) * diskon;
	kembalian=uang-total;
	
	
	printf("\n\t\t\t\t\t|==-----Struk-----==|\n\n");
	
	
	if(uang>=total)
	{
		printf("\t\t\t\ttotal\t\t: Rp. %i\n", total);
        printf("\t\t\t\tuang\t\t: Rp. %i\n", uang);
        printf("\t\t\t\tkembalian\t: Rp. %i\n", kembalian);
     printf ("\t\t\t\t |=================================|\n");
     printf ("\t\t\t\t |          Terimakasih            |\n");
     printf ("\t\t\t\t |       Telah berbelanja          |\n");
     printf ("\t\t\t\t |          Di Roselia             |\n");
     printf ("\t\t\t\t |            STORE                |\n");
     printf ("\t\t\t\t |=================================|\n");
	}
	else	
	{
		kekurangan = -1 * kembalian;
		printf("\t\t\ttotal\t\t: Rp. %i\n", total);
        printf("\t\t\tuang\t\t: Rp. %i\n", uang);
        printf("\t\t\tkekurangan\t: Rp. %i\n", kekurangan);
        printf("\t\tSilahkan kembali lagi untuk memenuhi tagihan anda");
        printf("\n\n\t\t\t\t========Terima Kasih========\n\n");
	}
	
	
	return 0;
}

/*Nama : Wahyu Lukytaningtyas
NIM : 202210370311413*/