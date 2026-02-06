#include<stdio.h>
int main(void){
	int n, grade[1000], max = 0;
	double avg = 0.0;
	scanf("%d", &n);
	for(int i=0; i < n; i++)
	{
		scanf("%d", &grade[i]);
		if(grade[i] > max) max = grade[i];
	}
	
	for(int i=0; i < n; i++)
	{
		avg += (double)grade[i]/max*100;
	}
	
	printf("%lf", avg/n);

	return 0;
}