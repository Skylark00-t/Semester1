# include <stdio.h>
# include <math.h>

int main(int argc, char** argv)
{
	printf("===== PROGRAM PERHITUNGAN KEANEKARAGAMAN FAUNA =====\n\n\n");
	
	int spesies,populasi;
	printf("Masukkan total spesies: ");
	scanf("%d", &spesies);
	printf("Masukkan jumlah populasi hewan: ");
	scanf("%d", &populasi);
	
	int i,hewan[spesies];
	float entropi;
	for(i=0;i<spesies;i++){
		printf("Masukkan total jumlah hewan untuk ke-%d",i);
		scanf("%d",(hewan+1));
	}
	return 0;
}