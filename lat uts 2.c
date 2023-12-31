#include<stdio.h>

int main(){
int a, b, c;
b = 10;
a = b++;
c = ++a * 5;

if (c > 20 && a < 10){
printf("Indonesia\n");
} else {
printf("Raya\n");
}
printf("Merdeka\n");

return 0;
}