#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
    int q[10][3];
    int w[3][10];
    int e[10][10];
    int t = 0;
    int r = 1;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 3; j++) {
            q[i][j] = i + j + 1; r++;
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 10; j++) {
        w[i][j] = i + j + 1; r++;
        }
    }
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            e[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                e[i][j] += q[i][k] * w[k][j];
            }
        }
    }
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            t++;
            printf("%d ", e[i][j]);
        }
    }
}  
