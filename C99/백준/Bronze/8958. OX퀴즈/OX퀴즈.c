#include<stdio.h>
int main(){
	int n;
	char res[80];
	
	scanf("%d", &n);
	for(int i=0; i < n; i++) {
		scanf("%s", &res);
		int j = 0, stack = 0, grade = 0;
		while(res[j] != '\0') {
			if(res[j] == 'O') {
				stack++;
				grade += stack;
			}
			else {
				stack = 0;
			}
			j++;
		}
		printf("%d\n", grade);
	}
	return 0;
}