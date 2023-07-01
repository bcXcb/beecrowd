#include <stdio.h>

typedef struct {
    int code;
    float price;
} Item;

int main() {
    int code;
    int total;
    double value;
    Item i[5] = {{1, 4.00f}, {2, 4.50f}, {3, 5.00f}, {4, 2.00f}, {5, 1.50f}};

    scanf("%d%d", &code, &total);

    value = i[code - 1].price * total;

    printf("Total: R$ %.2lf\n", value);

    return 0;
}
