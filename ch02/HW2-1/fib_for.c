#include "stdio.h"
#include "stdlib.h"

int main(void){
    long long unsigned n=0, F=0;
    long long unsigned tmp1=1, tmp2=0;

    printf("n=0, F=%d\n", 0);
    printf("n=1, F=%d\n", 1);

    for(n=2; n<=1000; n++){
        F = tmp1 + tmp2;
        printf("n=%llu, F=%llu\n", n, F);
        tmp2 = tmp1;
        tmp1 = F;        
    }

}