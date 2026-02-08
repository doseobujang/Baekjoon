#include<stdio.h>
int main(){
	int n;
	char num[101];
	scanf("%d", &n);	
	scanf("%s", &num);
	
	int sum = 0;
	for(int i=0; i < n; i++) {
		sum += ((int)num[i]-48);
	}
	
	printf("%d", sum);
	
	return 0;
}
