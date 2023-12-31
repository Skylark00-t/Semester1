#include <stdio.h>

int main(int argc, char** argv)
{
		  float num,sum;
		  
		  printf("Menghitung rata-rata\n\n");
		  
		  while(num>0 || num<0)
		  {
		  	printf("enter a number:");
		  	scanf("%f", &num);
		  	sum=sum+num;
		  }		
		  printf("sum=%.2f", sum);
		  return 0;
}

/*nama : Wahyu Lukytaningtyas
NIM : 202210370311413*/