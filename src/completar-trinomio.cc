#include "../include/trinomios"

void CompletarTrinomio(int a, int b, int c, int array[]) {
    int d = (b / 2) * (b / 2);

    array[0] = a;
    array[1] = b;
    array[2] = d;
}