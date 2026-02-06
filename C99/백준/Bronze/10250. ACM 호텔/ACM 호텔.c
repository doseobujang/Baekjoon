#include<stdio.h>
int main(void){
	int t, h, w, n, r;
	scanf("%d", &t);
	
	for(int i=0; i < t; i++)
	{
		scanf("%d %d %d", &h, &w, &n);
		if(n <= h*w)
		{
			if(n%h != 0)
			{
				r = (n-h*(n/h))*100 + (n/h+1);
			}
			else
			{
				r = h*100 + n/h;
			}
		}
		printf("%d\n", r);
	}
	
	return 0;
}