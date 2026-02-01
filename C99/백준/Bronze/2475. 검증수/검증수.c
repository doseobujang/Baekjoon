#include<stdio.h>
int main(){
	int num[5];
	int res = 0;
	for(int i = 0; i < 5; i++) {
		scanf("%d", &num[i]);
		res += num[i]*num[i];
	}
	res %= 10;
	printf("%d", res);
	
	return 0;
}