#include <stdio.h>

int main(int argc, char** argv)
{
	int i,j,arr[3][3];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter element for index [%d][%d]: ",i+1,j+1);
			scanf("%d",&arr[i][j]);
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}	
	return 0;
}