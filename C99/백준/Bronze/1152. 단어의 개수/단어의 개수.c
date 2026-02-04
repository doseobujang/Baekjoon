#include<stdio.h>
int main(){
	char s[1000001] = {0};
	gets(s);
	
	int i = 0, count = 0;
	while(s[i] != 0 && s[i+1] != 0) {
		if(s[i] == ' ') {
			count += 1;
		}
		i += 1;
	}
	if(s[0] != ' ') {
		count += 1;
	}
	printf("%d", count);
	
	return 0;
}