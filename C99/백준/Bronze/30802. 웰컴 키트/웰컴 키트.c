#include<stdio.h>
int main(void){
	int n, size[6], t, p;
	int x = 0;
	scanf("%d", &n);
	for(int i=0; i < 6; i++)
	{
		scanf("%d", &size[i]);
	}
	scanf("%d %d", &t, &p);
	
	for(int i=0; i < 6; i++)
	{
		if(0 < size[i] && size[i] < t) x++;
		else if(size[i] == t || size[i]%t == 0) x += (size[i]/t);
		else if(size[i] > t) x += (size[i]/t+1);
	}
	printf("%d\n", x);
	printf("%d %d", (n/p), (n%p));
	
	return 0;
}