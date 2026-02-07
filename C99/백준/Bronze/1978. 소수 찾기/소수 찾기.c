#include<stdio.h>

int main(void){
	int n, t, isPrime = 1, count = 0;
	
	scanf("%d", &n);
	for(int i=0; i < n; i++)
	{
		scanf("%d", &t);
		if(t==1) continue;
		for(int j=2; j < t; j++)
		{
			if(t%j == 0)
			{
				isPrime = 0;
				break;
			}
		}
		if(isPrime) count++;
		isPrime = 1;
	}
	
	printf("%d", count);

	return 0;
}