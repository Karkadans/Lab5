#include <stdio.h>

int main(int argc, char *argv[]) {
    double a[10][3]; 
    double b[3][10];  
    double f[10][10]; 

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%lf", &a[i][j]); 
        }
    }
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 10; j++) {
            scanf("%lf", &b[i][j]); 
        }
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            f[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                f[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%.2f", f[i][j]);  
            if (i < 9 || j < 9) printf(" ");
        }
    }
    printf("\n");
    
    return 0;
} 
