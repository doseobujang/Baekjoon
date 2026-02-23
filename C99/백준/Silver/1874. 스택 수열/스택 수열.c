#include<stdio.h>
#include<stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int *lst = (int*)malloc(sizeof(int)*n);
    int* stack = (int*)malloc(sizeof(int));
    int capacity = 0;
    char* result = (char*)malloc(sizeof(char)*(2*n+1));
    int i, j, k;

    for(i = 0; i < n; i++)
    {
        scanf("%d", lst+i);
    }

    i = 1, j = 0, k = 0;
    while(j < n)
    {
        if(!capacity) stack = (int*)malloc(sizeof(int));

        if(i < lst[j])
        {
            capacity++;
            stack = (int*)realloc(stack, capacity*sizeof(int));
            stack[capacity-1] = i;
            result[k] = '+';
            i++;
        }
        else if(i > lst[j])
        {
            if(lst[j] == stack[capacity-1])
            {
                capacity--;
                stack = (int*)realloc(stack, capacity*sizeof(int));
                result[k] = '-';
                j++;
            }
            else
            {
                printf("NO");
                return 0;
            }
        }
        else
        {
            result[k] = '+';
            result[k+1] = '-';
            i++;
            j++;
            k++;
        }
        k++;
    }

    for(i = 0; i < 2*n; i++)
    {
        printf("%c\n", result[i]);
    }    

    return 0;
}