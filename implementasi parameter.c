# include <stdio.h>

float kali(int a, int b){
	float hasil = (float)a * (float)b;
	return hasil;
}

void main(){
	printf("Hasil kali 5x2: %.2f\n", kali(5, 2));
}