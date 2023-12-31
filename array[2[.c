#include <stdio.h>

int main(int argc, char** argv)
{
	int n,i,largest = 0;
	printf("Enter total number of elements(1 to 100): ");
	scanf("%d", &n);
	
	float arr[n];
	for(i=0;i<n;i++){
		printf("Enter Number %d : ",i+1);
		scanf("%f", &arr[i]);
	}
	
	for(i=0;i<n;i++){
		largest += arr[i];
	}
	
	printf("Largest Elements : %d",largest>arr[n]);
	return 0;
}