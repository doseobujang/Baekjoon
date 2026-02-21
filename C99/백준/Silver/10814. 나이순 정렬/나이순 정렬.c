#include<stdio.h>
#include<stdlib.h>

typedef struct{
    int age;
    int order;
    char name[101];
} Node;

int compare(const void* _elem1, const void* _elem2){
    const Node* elem1 = (Node*)_elem1;
    const Node* elem2 = (Node*)_elem2;

    if(elem1->age > elem2->age) return 1;
    else if(elem1->age < elem2->age) return -1;
    else return (elem1->order - elem2->order);
}

int main() {
    int n;
    int i;
    scanf("%d", &n);
    Node lst[n];

    for(i=0; i<n; i++)
    {
        scanf("%d %s", &(lst[i].age), lst[i].name);
        lst[i].order = i;
    }

    qsort(lst, n, sizeof(Node), compare);

    for(i=0; i<n; i++)
    {
        printf("%d %s\n", lst[i].age, lst[i].name);
    }

    return 0;
}