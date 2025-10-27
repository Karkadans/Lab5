#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    double a[10];
    
for(int i = 0; i < 10; i++) scanf("%lf", &a[i]);
    double x = atof(argv[1]);
    int k = atoi(argv[2]);
    
for(int i = 9; i > k; i--) a[i] = a[i-1];
    a[k] = x;
    
    for(int i = 0; i < 10; i++) printf(i < 9 ? "%g " : "%g\n", a[i]);
    
    return 0;
} 
