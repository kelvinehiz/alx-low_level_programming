#include <stdio.h>
#include "100-operations.h"

int main() {
    int a = 10;
    int b = 5;

    printf("%d + %d = %d\n", a, b, add(a, b));
    printf("%d - %d = %d\n", a, b, sub(a, b));
    printf("%d * %d = %d\n", a, b, mul(a, b));
    printf("%d / %d = %d\n", a, b, div(a, b));
    printf("%d %% %d = %d\n", a, b, mod(a, b));

    return 0;
}
