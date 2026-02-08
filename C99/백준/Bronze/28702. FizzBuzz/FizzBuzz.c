#include<stdio.h>

int str2int(char*);

int main(void){
	char str[3][9];
	int next = 0;
	for(int i=0; i < 3; i++)
	{
		scanf("%s", str[i]);
		
		if(49 <= str[i][0] && str[i][0] <= 57)
		{
			next = str2int(&str[i][0]) + (3-i);
		}
	}
	
	if(next != 0 || next != 100000001)
	{
		if(next%15 == 0) printf("FizzBuzz");
		else if(next%3 == 0) printf("Fizz");
		else if(next%5 == 0) printf("Buzz");
		else printf("%d", next);
	}
	
	return 0;
}

int str2int(char *str){
	int n = 0;
	for(int i=0; i < 8; i++)
	{
		if(48 <= str[i] && str[i] <= 57)
		{
			n = n*10 + str[i]-48;
		}
	}
	
	return n;
}