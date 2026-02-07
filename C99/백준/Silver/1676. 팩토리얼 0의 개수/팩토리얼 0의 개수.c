#include<stdio.h>

int getCount(int, int);

int main(void){
	int n, i, count2 = 0, count5 = 0;
	scanf("%d", &n);
	for(i=1; i <= n; i++)
	{
		if(i%2 == 0) count2 += getCount(i, 2);
		if(i%5 == 0) count5 += getCount(i, 5);
	}
	
	printf("%d", count2 < count5 ? count2 : count5);

	return 0;
}

int getCount(int i, int t){
	int count = 0;
	while(1)
	{
		if(i%t != 0) break;
		else 
		{
			i /= t;
		}
		count++;
	}
	
	return count;
}