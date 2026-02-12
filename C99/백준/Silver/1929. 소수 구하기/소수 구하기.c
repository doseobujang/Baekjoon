#include<stdio.h>

int main(){
	int m, n;
	int i, j;

	scanf("%d %d", &m, &n);
	char num[n+1];
	
	for(i=0; i <= n; i++)
	{
		num[i] = 1;
	}
	num[0] = 0;
	num[1] = 0;
	
	for(i = 2; i*i <= n; i++)
	{
		if(num[i])
		{
			for(j=i*i; j <= n; j+=i)
			{
				num[j] = 0;
			}
		}
	}
	
	for(i=m; i <= n; i++)
	{
		if(num[i])
			printf("%d\n", i);
	}
	
	return 0;
}