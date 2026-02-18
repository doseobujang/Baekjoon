#include<stdio.h>
#include<stdlib.h>

int main() {
    int n, m, sum, result = 0;
    int i, j, k;

    scanf("%d %d", &n, &m);
    int *array = (int*)malloc(sizeof(int)*n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", array+i);
    }

    for(i = 0; i < n; i++)
    {
        for(j = i+1; j < n; j++)
        {
            for(k = j+1; k < n; k++)
            {
                sum = array[i] + array[j] + array[k];
                if(m >= sum && sum > result)
                {
                    result = sum;
                }
            }
        }
    }

    printf("%d", result);

    return 0;
}