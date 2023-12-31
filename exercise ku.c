/*Nama : Wahyu Lukytaningtyas
  NIM  : 202210370311413*/

#include <stdio.h>

int main(int argc, char** argv)
{
	float prsents,rata,total,variants,tvariants;
	int num=1;
	
	printf("\t\t\t===Program cek Persebaran kenaikan presentase saham perusahaan X===\n\n");
	
	while(num<=5)
	{
		printf("Masukkan persentase kenaikan saham pada tahun ke-%d:", num);
		scanf("%f", &prsents);
		num++;
		total=total+prsents;
	}
	  rata=total/5;
	  variants=((prsents * prsents)-(2 * prsents * rata)+(rata * rata))/4.00;
	  tvariants=total+variants;
	  
      printf("\n\nNilai persebaran data ke 1 - 5 sebesar: %.2f dari rata-rata sebesar: %.2f untuk seluruh data\n\n",tvariants,rata);
	  
	  printf("Kesimpulan: ");
	  if(tvariants<=10.00)
	  {
	  	printf("Perlu ada peningkatan produksi secara signifikan\n");
	  }
	  else if(tvariants<=50.00)
	  {
	  	printf("Perlu ada peningkatan produksi secara tidak terlalu signifikan\n");
	  }
	  else if(tvariants>50.00)
	  {
	  	printf("Tidak perlu ada peningkatan produksi\n");
	  }
	  
	  printf("\nNama : Wahyu Lukytaningtyas\n");
	  printf("NIM : 202210370311413\n");
	  
	return 0;
}