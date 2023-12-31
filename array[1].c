#include <stdio.h>

int main(int argc, char** argv)
{
	int n,average = 0;
	printf("Enter n: ");
	scanf("%d", &n);
	
	int i,arr[n];
	for(i=0;i<n;i++){
		printf("Enter number%d: ",i+1);
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++){
		average += arr[i];
	}
	printf("Average = %d",average/n);
	return 0;
} 