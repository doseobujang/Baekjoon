#include<stdio.h>
int main(){
	int n, num;
	int min = 1000000, max = -1000000; 
	
	scanf("%d", &n);
	if(n == 1) {
		scanf("%d", &num);
		min = num;
		max = num;
	}
	else {
		for(int i=0; i < n; i++) {
			scanf("%d", &num);
			if(num < min) min = num;
			if(num > max) max = num;
		}
	}
	printf("%d %d", min, max);
	return 0;
}