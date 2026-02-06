#include<stdio.h>
int main(void){
	int a, b, c;
	while(1)
	{
		scanf("%d %d %d", &a, &b, &c);
		if(a+b+c == 0) break;
		else if((a*a == b*b + c*c) || (b*b == a*a + c*c) || (c*c == a*a + b*b))
		{
			printf("right\n");
		}
		else printf("wrong\n");
	}
	
	return 0;
}