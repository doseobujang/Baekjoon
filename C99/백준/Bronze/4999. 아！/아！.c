#include<stdio.h>

int main(void){
	char j[1001] = {0}, d[1001] = {0};
	int i = 0;
	scanf("%s%s", &j, &d);
	while(1)
	{
		if(j[i] == 'h' || d[i] == 'h') break;
		i++;
	}
	if(j[i] == d[i] || d[i] == 'h') printf("go");
	else printf("no");
	return 0; 
}