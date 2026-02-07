#include<stdio.h>

int main(void){
	int t, k, n;
	scanf("%d", &t);
	for(int i=0; i < t; i++)
	{
		int floor[14] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
		scanf("%d %d", &k, &n);
		for(int j=0; j < k; j++)
		{
			for(int l=1; l < n; l++)
			{
				floor[l] += floor[l-1];
			}
		}
		printf("%d\n", floor[n-1]);
	}

	return 0;
}