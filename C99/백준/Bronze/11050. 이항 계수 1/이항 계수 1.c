#include<stdio.h>
int main(void){
	int n, k, u = 1, d = 1;
	scanf("%d %d", &n, &k);
	
	if(k == 0) printf("1");
	else
	{
		for(int i=1; i <= k; i++)
		{
			u *= n - i + 1;
			d *= i;
		}
		
		printf("%d", u/d);
	}

	return 0;
}