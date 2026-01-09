#include <stdio.h>

int main() {
    int i1, i2, *p1;

    i1 = 5;
    p1 = &i1;

    i2 = 2 * *p1 / 2 + 10;

    // Verificăm rezultatele
    if (i1 != 5)
        return 1;

    if (i2 != 15)
        return 1;

    return 0;   // PASS
}
