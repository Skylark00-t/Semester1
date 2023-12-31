#include <stdio.h>

int main(int argc, char** argv)
{
	int m,n,i,j;
	printf("Enter rows and columns of matrix: ");
	scanf("%d",&m);
	scanf("%d",&n);
	
	int matrix[m][n];
	printf("Enter element of matrix: \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("Enter element a%d%d: ",i+1,j+1);
			scanf("%d",&matrix[i][j]);
		}
	}
	
	printf("\nEntered matrix: \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d",matrix[i][j]);
		}
		printf("\n");
	}
	
	printf("\nTranspose of matrix: \n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d",matrix[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}