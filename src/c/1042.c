#include <stdio.h>
 
int main() {
    int a;
    int b;
    int c;
    int o1;
    int o2;
    int o3;

    scanf("%d%d%d", &a, &b, &c);

    if (a > b) {
        if (a > c) {
            o3 = a;
            if (b > c) {
                o2 = b;
                o1 = c;
            } else {
                o1 = b;
                o2 = c;
            }
        } else {
            o1 = b;
            o2 = a;
            o3 = c;
        }
    } else {
        if (a > c) {
            o1 = c;
            o2 = a;
            o3 = b;
        } else {
            o1 = a;
            if (b > c) {
                o3 = b;
                o2 = c;
            } else {
                o2 = b;
                o3 = c;
            }
        }
    }

    printf("%d\n", o1);
    printf("%d\n", o2);
    printf("%d\n", o3);
    puts("");
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);

    return 0;
}
