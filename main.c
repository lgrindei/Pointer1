#include <stdio.h>

int main() {
    int i1, i2, *p1;

    i1 = 5;
    p1 = &i1;

    // STUDENTUL TREBUIE SĂ ÎNȚELEAGĂ ACEASTĂ LINIE
    i2 = 2 * *p1 / 2 + 10;

    printf("i1 = %d, i2 = %d\n", i1, i2);
    return 0;
}
