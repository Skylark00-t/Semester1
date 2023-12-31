# include <stdio.h>

int main()
{
	int i = 1;
	
	while(i <= 3)
	{
		printf("Sebutkan buah kesukaanmu: \n");
		scanf("%d", &i);
		i++;
	}
	return 0;
}