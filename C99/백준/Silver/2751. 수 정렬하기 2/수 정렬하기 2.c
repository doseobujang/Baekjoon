#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int ComparePoint(const void *_elem1, const void *_elem2){
	int* elem1 = (int*)_elem1;
	int* elem2 = (int*)_elem2;
	
	if(*elem1 > *elem2)
		return 1;
	else if(*elem1 < *elem2)
		return -1;
	else
		return 0;
}

int main(){
	int n, i;
	scanf("%d", &n);
	int num[n];
	
	for(i=0; i < n; i++)
	{
		scanf("%d", num+i);
	}
	
	qsort((void*)num, n, sizeof (int), ComparePoint);
	
	for(i=0; i < n; i++)
	{
		printf("%d\n", num[i]);
	}
	
	return 0;
}