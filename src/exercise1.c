#include <stdio.h>

int main(int argc, char** argv) {
    double array[10];
    double sum = 0.0;
    double average;
    
    
    for(int i = 0; i < 10; ++i) {
        scanf("%lf", &array[i]);
        sum += array[i];
    }
    
    average = sum / 10.0;
    
    
    if (average >= 0) {
        average = (int)(average * 100 + 0.5) / 100.0;
    } else {
        average = (int)(average * 100 - 0.5) / 100.0;
    }
    
    printf("%.3f\n", average); 
    
    return 0;
}