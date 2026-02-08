#include<stdio.h>
int main(){
	int h, m;
	scanf("%d %d", &h, &m);
	
	if(m >= 45) {
		m -= 45;
	}
	else {
		m = 60 - (45 - m);
		if(h == 0) {
			h = 23;
		}
		else {
			h -= 1;
		}
	}
	
	printf("%d %d", h, m);
	return 0;
}
