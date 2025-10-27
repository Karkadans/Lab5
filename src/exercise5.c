#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
    int a[10][3];
    int b[3][10];
    int f[10][10];
    int q = 0;
    int s = 1;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 3; j++) {
            a[i][j] = i + j + 1; s++;
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 10; j++) {
        b[i][j] = i + j + 1; s++;
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
            q++;
            printf("%d ", f[i][j]);
        }
    }
} 
