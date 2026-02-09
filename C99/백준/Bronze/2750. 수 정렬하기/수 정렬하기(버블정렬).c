#include<stdio.h>
int main(void){
	int n, temp, data[1000] = {0};
	scanf("%d", &n);
	for(int i=0; i < n; i++)
	{
		scanf("%d", data + i);
	}
	
	for(int i=0; i < n-1; i++)
	{
		for(int j=0; j < n-1-i; j++)
		{
			if(data[j] > data[j+1])
			{
				temp = data[j];
				data[j] = data[j+1];
				data[j+1] = temp;
			}
		}
	}
	
	for(int i=0; i < n; i++)
	{
		printf("%d\n", data[i]);
	}
	
	return 0;
}
