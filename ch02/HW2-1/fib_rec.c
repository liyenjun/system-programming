#include "stdio.h"
#include "stdlib.h"

long long unsigned int f(int n){
    if( n==1 || n==2)
        return 1;
    else
        return f(n-1) + f(n-2);
}

int main(void){
    int n;

    printf("n=0, F=0\n");

    for (n=1; n<=1000; n++)
        printf("n=%d, F=%llu\n", n ,f(n));
}