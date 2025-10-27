#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    double array[10];
    double res[10]; 
    int k;
    
    for(int i = 0; i < 10; ++i) {
        scanf("%lf", &array[i]);
    }
    
    k = atoi(argv[1]);
    
    if (k < 0) {
        k = -k; 
        k = k % 10;
        k = 10 - k;
    }
    
    k = k % 10;
    
    for(int i = 0; i < 10; ++i) {
        res[(i + k) % 10] = array[i];
    }
    
    for(int i = 0; i < 10; ++i) {
        printf("%g", res[i]);
        if (i < 9) printf(" "); 
    }
    printf("\n");
    
    return 0;
}
