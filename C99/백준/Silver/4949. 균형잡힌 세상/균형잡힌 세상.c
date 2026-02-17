#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void) {
    int capacity = 0, i = 0;
    char str[102] = {0};
    char *stackArray;
    
    while(1)
    {
        capacity = 0;

        fgets(str, sizeof(str), stdin);
        if(str[0] == '.') break;

        i = 0;
        stackArray = (char*)malloc(sizeof(char)*capacity);

        while(str[i] != '.')
        {
            if(str[i] == '(' || str[i] == '[')
            {
                stackArray = (char*)realloc(stackArray, sizeof(char)*(++capacity));
                stackArray[capacity-1] = str[i];
            }
            else if(str[i] == ')' || str[i] == ']')
            {
                if(capacity == 0)
                {
                    capacity = -1;
                    break;
                }
                else if((str[i] == ')' && stackArray[capacity-1] == '(') || (str[i] == ']' && stackArray[capacity-1] == '['))
                {
                    stackArray = (char*)realloc(stackArray, sizeof(char)*(--capacity));
                }
                else break;
            }
            i++;
        }
        
        if(capacity == 0) printf("yes\n");
        else printf("no\n");
    }

    return 0;
}