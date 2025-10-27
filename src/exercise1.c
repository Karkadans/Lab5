#include <stdio.h>

int main(int argc, char** argv) {
    double array[10];
    double sum =0.0;
    double b;
    
for(int i =0; i<10; ++i){
    scanf("%lf", &array[i]);
    sum += array[i];
}
b = sum/10.0;
printf("%.3f\n", b);
return 0;  
} 