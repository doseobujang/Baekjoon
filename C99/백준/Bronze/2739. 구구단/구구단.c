#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    char a = '*';
    char b = '=';
    for(int i=1; i<=9; i++){
    int s;
    s=n*i;
    printf("%d %c %d %c %d\n", n,a, i,b, s);
    }
    
}