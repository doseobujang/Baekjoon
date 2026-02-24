#include<stdio.h>

int main() {
    int n, x;
    int queue[10000];
    int front = 0, rear = 0;
    char command[6];
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++)
    {
        scanf("%s %d", command, &x);

        if (command[1] == 'u')
            queue[rear++] = x;
        else if(command[1] == 'o')
        {
            if(front == rear) 
                printf("-1\n");
            else
                printf("%d\n", queue[front++]);
        }
        else if(command[0] == 's')
            printf("%d\n", rear-front);
        else if(command[0] == 'e')
            if(front == rear)
                printf("1\n");
            else 
                printf("0\n");
        else if(command[0] == 'f')
            if(front == rear)
                printf("-1\n");
            else
                printf("%d\n", queue[front]);
        else if(command[0] == 'b')
            if(front == rear)
                printf("-1\n");
            else
                printf("%d\n", queue[rear-1]);
    }

    return 0;
}