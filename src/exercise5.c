#include <stdio.h>

int main(int argc, char** argv) {
    double A[10][3], B[3][10], C[10][10];
    int i, j, k;
    for(i = 0; i < 10; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%lf", &A[i][j]);
        }
    }
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 10; j++) {
            scanf("%lf", &B[i][j]);
        }
    }
    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {
            C[i][j] = 0;
            for(k = 0; k < 3; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {
            printf("%g", C[i][j]);
            if (i < 9 || j < 9) printf(" ");
        }
    }
    printf("\n");
    
    return 0;
}
