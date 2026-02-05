#include<stdio.h>
int main(void){
	int n, count = 0, lst[10], isZero = 0;
	for(int i=0; i < 10; i++) {
		scanf("%d", &n);
		lst[i] = n % 42;
		if(lst[i] == 0) isZero = 1;	
	}
	for(int i=1; i < 10; i++) {
		for(int j=0; j < 10; j++) {
			if((i != j) && (lst[i] == lst[j])) {
				lst[i] = 0;
			}
		}
	}
	for(int i=0; i < 10; i++) {
		if(lst[i] != 0) count++;
		
	}
	
	printf("%d", count+isZero);
	
	return 0;
}