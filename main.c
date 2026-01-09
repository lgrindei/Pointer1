#include <stdio.h>

int main() {
    int i1, i2, *p1;

    i1 = 5;
    p1 = &i1;

    // STUDENTUL COMPLETEAZĂ LINIA DE MAI JOS
    // Pune valoarea pe care crezi că o va avea i2
    i2 = ___;   // <- înlocuiește ___ cu numărul tău

    // Verificarea corectitudinii
    if (i1 != 5)
        return 1;

    if (i2 != 15)
        return 1;

    return 0;   // PASS
}

