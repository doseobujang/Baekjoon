#include<stdio.h>
int main(void){
	int a, b, c, s, p;
	int num[9], res[10] = {0};
	scanf("%d %d %d", &a, &b, &c);
	s = a*b*c;
	for(int i=8; i > 0; i--)
	{
		p = 1;
		for(int j=0; j < i; j++)
		{
			p *= 10;
		}
		num[8-i] = s / p;
		s -= (num[8-i]*p);
	}
	num[8] = s;
	
	int isNum = 0;
	for(int i=0; i < 9; i++)
	{
		if(num[i] != 0)	isNum = 1;
		if(isNum) res[num[i]]++;
	}
	
	for(int i=0; i < 10; i++)
	{
		printf("%d\n", res[i]);
	}
	
	
	return 0;
}