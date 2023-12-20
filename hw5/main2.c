#include <stdio.h>
int main() {
    int a, b;
    float pi = 0.0;
    float x;
    for (a = 1, b = 0; (pi >= 3.1416 || pi < 3.14159); a+= 2,b++) 
    {
        x = 4.0 / a;
        if (b % 2 == 0){
            pi = pi + x;
        }
        else{
            pi = pi - x;
        } 
    }
    printf("PI = %f\n", pi);
    printf("X = %f", x);
    return 0;
}
