#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void) {
    int t, capacity = 0, i = 0, j = 0;
    char str[52] = {0};
    char *stackArray;
    
    scanf("%d", &t);
    getchar();

    for(i=0; i<t; i++)
    {
        capacity = 0;

        fgets(str, sizeof(str), stdin);

        j = 0;
        stackArray = (char*)malloc(sizeof(char)*capacity);

        while(str[j] != '\n')
        {
            if(str[j] == '(')
            {
                stackArray = (char*)realloc(stackArray, sizeof(char)*(++capacity));
                stackArray[capacity-1] = '(';
            }
            else if(str[j] == ')')
            {
                if(capacity == 0)
                {
                    capacity = -1;
                    break;
                }
                else if(stackArray[capacity-1] == '(')
                {
                    stackArray = (char*)realloc(stackArray, sizeof(char)*(--capacity));
                }
                else break;
            }
            j++;
        }
        
        if(capacity == 0) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}