#include <stdio.h>

int main() {
    const float pi = 3.14;
    float r,s;
    scanf("%f",&r);
    s = (float)(pi*r*r);
    printf("Area: %.2f",s);
    return 0;
}