#include<stdio.h>

int main(void){
	int h, w, r;
	scanf("%d%d", &h, &w);
	r = h < w ? h : w;
	printf("%d", r*100/2);
	return 0; 
}