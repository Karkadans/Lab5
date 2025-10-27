#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    double a[10];
    int k = atoi(argv[1]);
    
    for(int i = 0; i < 10; i++) scanf("%lf", &a[i]);
    
    k = (k % 10 + 10) % 10; 
    
    for(int i = 0; i < 10; i++) 
        printf("%g ", a[(i - k + 10) % 10]);
    printf("\n"); 
    return 0;
} 
