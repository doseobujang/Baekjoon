#include<stdio.h>
int main(void){
	int num[8];
	int set[8]= {1, 2, 3, 4, 5, 6, 7, 8};
	int check = 0;
	for(int i=0; i < 8; i++)
	{
		scanf("%d", &num[i]);
		if(num[i] == set[i])
		{
			check++;
		}
		else if(num[i] == set[7-i])
		{
			check--;
		}
	}
	
	if(check == 8) printf("ascending");
	else if(check == -8) printf("descending");
	else printf("mixed");
	return 0;
}