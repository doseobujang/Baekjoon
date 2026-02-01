#include<stdio.h>
int main(){
	int grade;
	scanf("%d", &grade);
	if(100 >= grade && grade >= 90) printf("A");
	else if(grade >= 80) printf("B");
	else if(grade >= 70) printf("C");
	else if(grade >= 60) printf("D");
	else printf("F");
	
	return 0;
}