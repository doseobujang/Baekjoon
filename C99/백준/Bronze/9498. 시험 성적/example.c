#include <stdio.h>

int main()
{
    int s;

    scanf("%d", &s);
    printf("%c", 70 - (s >= 60 ? (s/10) - 4 - (s == 100) : 0));
    return 0;
}
