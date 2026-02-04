#include<stdio.h>
int main(){
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d\n", a+b-c);
	if(b < 10) a *= 10;
	else if(b < 100) a *= 100;
	else if(b < 1000) a*= 1000;
	else a *= 10000;
	printf("%d", a+b-c);
	return 0;
}