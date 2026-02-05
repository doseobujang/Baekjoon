#include <stdio.h>

int main()
{
    int arr[42]={0},c,a;
    for (int i=0;i<10;i++)
    {
        scanf("%d",&a);
        arr[a%42] = 1;
    }
    c = 0;
    for (int i=0;i<42;i++)
    {
        if (arr[i] == 1)
        {
            c++;
        }
    }
    printf("%d",c);

    return 0;
}
