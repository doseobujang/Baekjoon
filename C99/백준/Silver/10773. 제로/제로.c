#include<stdio.h>
#include<stdlib.h>

int main() {
    int k, n, capacity = 0, sum = 0;
    int *jangbu = (int*)malloc(sizeof(int));

    scanf("%d", &k);

    for(int i=0; i < k; i++)
    {
        scanf("%d", &n);
        
        if(n)
        {
            sum += n;
            jangbu = (int*)realloc(jangbu, sizeof(int)*(++capacity)); 
            jangbu[capacity-1] = n;
        }
        else
        {
            sum -= jangbu[--capacity];
            jangbu = (int*)realloc(jangbu, capacity*sizeof(int));
        }
    }
    printf("%d", sum);

    free(jangbu);
    return 0;
}