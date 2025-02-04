#include <stdio.h>

int main() {
    int a,s,d;
    float av;
    scanf("%d %d %d",&a,&s,&d);
    av = (float)(a + s + d)/3;
    printf("Average: %.2f",av);
    return 0;
}