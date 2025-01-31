#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int g, h, s;
    scanf("%d,%d",&g,&h);
    s = g + h;
    printf("Sum: ",s);
    return 0;
}