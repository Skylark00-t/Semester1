/* Algoritma adalah proses atau serangkaian aturan yang harus diikuti dalam 
perhitungan atau operasi pemecahan lainnya dalam komputer
1. kalimat deskriptif
2. pseudecode
3. flowchart*/

#include <stdio.h>

int main(int argc, char** argv)
{
	int A,B;
	scanf("%d", &A);
	scanf("%d", &B);
	
	char kar;
	scanf(" %c", &kar);
	
	if(kar == '*'){
		printf("%d * %d = %d",A,B,A*B);
	}else if(kar == '/'){
		printf("%d / %d = %d",A,B,A/B);
	}else if(kar == '+'){
		printf("%d + %d = %d",A,B,A+B);
	}else if(kar == '-'){
		printf("%d - %d = %d",A,B,A-B);
	}else if(kar == '%'){
		printf("%d mod %d = %d",A,B,A%B);
	}else{
		printf("operasi tidak dikenali");
	}
	
	return 0;
}

