#include<stdio.h>
int main(void){
	char isbn[14];
	int v = 0, w;
	scanf("%s", &isbn);
	
	for(int i=0; i < 13; i++)
	{
		if(isbn[i] != 42)
		{
			if((i+1)%2 == 1) v += (isbn[i] - 48);
			else v += ((isbn[i] - 48)*3);
		}
		else
		{
			if((i+1)%2 == 1) w = 1;
			else w = 3;
		}
	}

	for(int i=0; i < 10; i++)
	{
		if((v+i*w)%10 == 0)
		{
			printf("%d", i);
			break;
		}
	}

	return 0;
}