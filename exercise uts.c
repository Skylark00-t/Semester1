#include <stdio.h>

int main(int argc, char** argv)
{
	float prsents,rata,total,variants;
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
	  
      printf("Total\t\t=%.2f\n", total);
      printf("Rata-Rata\t=%.2f\n", rata);
      printf("Variants\t=%.2f\n", variants);
      
      printf("Nilai persebaran data ke 1 - 5 sebesar: %.2f dari rata-rata sebesar: %.2f untuk seluruh data\n\n",variants,rata);
	  
	  printf("Kesimpulan: ");
	  if(variants>0 || variants<=10)
	  {
	  	printf("Perlu ada peningkatan produksi secara signifikan");
	  }
	  else if(variants>10 || variants<=50)
	  {
	  	printf("Perlu ada peningkatan produksi secara tidak terlalu signifikan");
	  }
	  else
	  {
	  	printf("Tidak perlu ada peningkatan produksi");
	  }
	return 0;
}