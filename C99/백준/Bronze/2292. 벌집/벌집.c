#include<stdio.h>
int main(void){
	int n, a = 1, b;
	scanf("%d", &n);
	if(n==1) printf("1");
	else
	{
		int i = 0;
		while(1)
		{
			b = a + 6*i;
			if(a < n && n <= b) break;
			a = b;
			i++;
		}
		
		printf("%d", i+1);
	}

	return 0;
}