#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int Compare(const void* _elem1, const void* _elem2){
    char* elem1 = (char*)_elem1;
    char* elem2 = (char*)_elem2;

    if(strlen(elem1) > strlen(elem2)) return 1;
    else if(strlen(elem1) < strlen(elem2)) return -1;
    else return strcmp(elem1, elem2);
}

int main() {
    int n;
    scanf("%d", &n);
    char str[n][51];
    int i;

    for(i=0; i<n; i++)
    {
        scanf("%s", str+i);
    }

    qsort(str, n, sizeof(char)*51, Compare);

    printf("%s\n", str[0]);
    for(i=1; i<n; i++)
    {
        if(strcmp(str[i], str[i-1]))
            printf("%s\n", str[i]);
    }
    return 0;
}