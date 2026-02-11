#include<stdio.h>

void Swap(int*, int*);
int Partition(int*, int, int);
void QuickSort(int*, int, int);

int main(void){
	int n, i;
	scanf("%d", &n);
	int DataSet[n];
	
	for(i = 0; i < n; i++)
	{
		scanf("%d", DataSet+i);
	}
	
	QuickSort(DataSet, 0, n-1);
	
	for(i = 0; i < n; i++)
	{
		printf("%d\n", DataSet[i]);
	}
	
	return 0;
}

void QuickSort(int DataSet[], int Left, int Right){
	if(Left < Right)
	{
		int Index = Partition(DataSet, Left, Right);
		
		QuickSort(DataSet, Left, Index-1);
		QuickSort(DataSet, Index+1, Right);
	}
}

int Partition(int DataSet[], int Left, int Right){
	int First = Left;
	int Pivot = DataSet[First];
	
	++Left;
	
	while(Left <= Right)
	{
		while(DataSet[Left] <= Pivot && Left < Right)
			++Left;
			
		while(DataSet[Right] >= Pivot && Left <= Right)
			--Right;
			
		if(Left < Right)
			Swap(&DataSet[Left], &DataSet[Right]);
		else
			break;
	}
	
	Swap(&DataSet[First], &DataSet[Right]);
	
	return Right;
}

void Swap(int *A, int *B){
	int Temp = *A;
	*A = *B;
	*B = Temp;
}
