#include <stdio.h>

int main() {
    int a;
    char q[100],w[100];
    scanf("%s %d %s",&q,&a,&w);
    printf("Name: %s\n",q);
    printf("Age: %d\n",a);
    printf("Hobby: %s",w);
    return 0;
}