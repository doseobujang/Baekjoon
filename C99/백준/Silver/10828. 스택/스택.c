#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int n, x, top = 0;
	char order[6];

	scanf("%d", &n);
	int* stack = (int*)malloc(sizeof(int));
	
	for(int i=0; i < n; i++)
	{
		scanf("%s", order);
		if(!strcmp(order, "push"))
		{
			scanf("%d", &x);
			stack = (int*)realloc(stack, ++top*sizeof(int));
			stack[top-1] = x;
		}
		else
		{
			if(!strcmp(order, "pop"))
			{
				if(top == 0) printf("-1");
				else
				{
					printf("%d", stack[top-1]);
					stack = (int*)realloc(stack, --top*sizeof(int));
				}
			}
			else if(!strcmp(order, "size"))
			{
				printf("%d", top);
			}
			else if(!strcmp(order, "empty"))
			{
				if(top == 0) printf("1");
				else printf("0");
			}
			else if(!strcmp(order, "top"))
			{
				if(top == 0) printf("-1");
				else printf("%d", stack[top-1]);
			}
			printf("\n");
		}
		
	}
}