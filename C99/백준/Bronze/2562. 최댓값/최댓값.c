#include<stdio.h>
int main(){
	int n[9], max = 0, order;
	for(int i=0; i < 9; i++) {
		scanf("%d", &n[i]);
		if(n[i] > max) {
			max = n[i];
			order = i+1;
		}
	}
	printf("%d\n%d", max, order);
	return 0;
}