#include <stdio.h>
int main() {
    int a = 0;
    int b = 0;
    while(1) {
        scanf("%d %d", &a, &b);
        if(a==0 && b==0) {
            break;
        } else {
            printf("%d\n", a+b);
        }
    }
}