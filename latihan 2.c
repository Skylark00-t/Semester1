#include <stdio.h>
 
int main()
{
  int nilai;
  char nama[100];
  
  printf("===Selamat Datang di Program klasifikasi generasi===\n");
  
  printf("\nMasukkan Nama anda : ");
  gets(nama);
  
  printf("Tahun berapa anda lahir ? : ");
  scanf("%d",&nilai);
 
  if (nilai >= 1944 && nilai <=1964) {
    printf("\n%s Berdasarkan Tahun Lahir, anda tergolong boomer", nama);
  }
  else if (nilai >= 1965 && nilai <= 1979) {
    printf("\n%s Berdasarkan Tahun Lahir, anda tergolong generasi X", nama);
  }
  else if (nilai >= 1980 && nilai <= 1994) {
    printf("\n%s Berdasarkan Tahun lahir, anda tergolong generasi Y", nama);
  }
  else if (nilai >= 1995 && nilai <= 2015) {
    printf("\n%s Berdasarkan Tahun Lahir, anda tergolong generasi Z", nama);
  }
  else {
    printf("\n%sMaaf, tahun lahir tidak sesuai ", nama);
  }
  return 0;
}