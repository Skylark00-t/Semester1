# include <stdio.h>
# include <math.h>
int main(int argc, char** argv)
{
	int sp,po,i,spe,total;
	
	printf("====== PROGRAM PERHITUNGAN KEANEKARAGAMAN FAUNA =====\n");
	
	printf("\nMasukkan total jumlah spesies: ");
	scanf("%d", &sp);
	printf("Masukkan total jumlah populasi hewan: ");
	scanf("%d", &po);
	
	printf("\n\n");
	for(i=0;i<4;i++){
		printf("Masukkan total jumlah hewan untuk spesies ke-%d :",i+1);
		scanf("%d", &spe);
		total =(- (spe / po * (log(2) * spe / po )))+ total;
		
		
	}
	
	printf("\nNilai entropi dari seluruh spesies dalam populasi hewan : %d", total);
	printf("\n--------------------");
	
	printf("\n\nKesimpulan: ");
	
	if(total<1)
	{
		printf("Keanekaragaman fauna pada wilayah tersebut sangat kurang");
	}
	else if(total>1)
	{
		printf("Keanekaragaman fauna pada wilayah tersebut sangat beragam");
	}
	
	
	
	return 0;
}