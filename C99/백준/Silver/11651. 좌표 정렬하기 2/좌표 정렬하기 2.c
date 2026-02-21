#include<stdio.h>
#include<stdlib.h>

int compare(const void* _elem1, const void* _elem2){
    const int* elem1 = (int*)_elem1;
    const int* elem2 = (int*)_elem2;

    if(elem1[1] > elem2[1]) return 1;
    else if(elem1[1] < elem2[1]) return -1;
    else return elem1[0] - elem2[0];
}

int main() {
    int n;
    int i;
    scanf("%d", &n);
    int coord[n][2];

    for(i=0; i<n; i++)
    {
        scanf("%d %d", &coord[i][0], &coord[i][1]);
    }

    qsort(coord, n, sizeof(int)*2, compare);

    for(i=0; i<n; i++)
    {
        printf("%d %d\n", coord[i][0], coord[i][1]);
    }
    return 0;
}