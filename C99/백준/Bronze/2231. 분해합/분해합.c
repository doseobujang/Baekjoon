#include<stdio.h>

int main() {
    int n, _n, m, _m, digit = 1, sum = 0;
    int i;

    scanf("%d", &n);
    _n = n;
    while((_n/=10) != 0)
    {
        digit++;
    }
    m = n - (digit*9) -1;

    while(m < n)
    {
        if(sum == n) break;
        m++;
        _m = m;
        sum = m;
        for(i = 1; i <= digit; i++)
        {
            sum += (_m%10);
            _m/=10;
        }
    }

    if(n == sum)
    {
        printf("%d", m);
    }
    else
    {
        printf("0");
    }
    
    return 0;
}