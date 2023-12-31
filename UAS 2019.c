# include <stdio.h>

int main(int argc, char** argv)
{
	char str[]="muhammadiyah";
	char *s1 = str, *s2 = str;
	int i;
	
	for(i=0;i<7;i++){
		printf(" %c",*str);
		++s1;
	}
	
	for(i=0;i<8;i++){
		printf(" %c", *s2);
		++s2;
	}
	
	getchar();
	return 0;
}