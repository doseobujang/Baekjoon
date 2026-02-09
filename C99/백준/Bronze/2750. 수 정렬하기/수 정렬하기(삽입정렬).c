#include<stdio.h>
#include<string.h>

void InsertionSort(int*, int); 

int main(void){
	int n, i = 0;
	scanf("%d", &n);
	int DataSet[n];
	
	for(i = 0; i < n; i++)
	{
		scanf("%d", DataSet + i);
	}

	InsertionSort(DataSet, n);
	
	for(i=0; i<n; i++)
	{
		printf("%d\n", DataSet[i]);
	}
	
	printf("\n");
	
	return 0;
}

void InsertionSort(int DataSet[], int n)
{
	int i = 0;
	int j = 0;
	int value = 0;
	
	for(i = 0; i < n; i++)
	{
		if(DataSet[i-1] <= DataSet[i])
			continue;
			
		value = DataSet[i];
		
		for(j = 0; j < i; j++)
		{
			if(DataSet[j] > value)
			{
				memmove(&DataSet[j+1], &DataSet[j], sizeof(DataSet[0]) * (i-j));
				DataSet[j] = value;
				break;
			}
		}
	}
}
