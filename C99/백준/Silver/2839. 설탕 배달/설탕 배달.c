#include<stdio.h>

int main(void){
	int n, count;
	scanf("%d", &n);
	if(n%5 == 0)
	{
		printf("%d", n/5);
	}
	else
	{
		int i, j, isGet = 0;
		for(i = (n/5); i > 0; i--)
		{
			for(j = 1; j < (n/3); j++)
			{
				if(5*i + 3*j == n)
				{
					isGet = 1;
					break;
				}
			}
			if(isGet) break;
		}
		
		if(isGet) printf("%d", i+j);
		else if(n%3 == 0) printf("%d", n/3);
		else printf("-1");
		
	}
	
	return 0;
}