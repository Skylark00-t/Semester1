#include <stdio.h>

int main(int argc, char** argv)
{
	int m,n,i,j;
	printf("Enter rows number: ");
	scanf("%d", &m);
	printf("Enter columns number: ");
	scanf("%d", &n);
	
	float matrix1[m][n],matrix2[m][n],result[m][n];
	printf("Enter elements of 1st matrix\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("Enter a%d%d: ",i+1,j+1);
			scanf("%f",&matrix1[i][j]);
		}
	}
	
	printf("Enter elements of 2nd matrix\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("Enter b%d%d: ",i+1,j+1);
			scanf("%f",&matrix2[i][j]);
		}
	}
	
	printf("Sum of matrix\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			result[m][n] = matrix1[i][j] + matrix2[i][j];
			printf("%.2f",result[m][n]);
		}
		printf("\n");
	}
	return 0;
}