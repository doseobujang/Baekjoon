#include<stdio.h>

int main(void){
	int a, s = 0;
	for(int i=0; i < 5; i++)
	{
		scanf("%d", &a);
		s+=a;
	}
	printf("%d", s);
	
	return 0; 
}