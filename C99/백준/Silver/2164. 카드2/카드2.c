#include<stdio.h>
#include<stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int* queue = (int*)malloc(sizeof(int)*n+1);
    int front = 1, rear = n;
    int i;
    for(i = 1; i <= n; i++)
    {
        queue[i] = i;
    }

    for(i = 1; i < n; i++)
    {
        rear = (rear+1)%n;
        
        queue[rear] = queue[front+1];
        front = (front+2)%n;
    }

    printf("%d", queue[rear]);    

    return 0;
}