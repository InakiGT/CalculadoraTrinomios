#include "../include/trinomios"

void SumaTrinomios(int a1, int b1, int c1, int a2, int b2, int c2, int array[]) {
    int a3 = a1 + a2;
    int b3 = b1 + b2;
    int c3 = c1 + c2;

    array[0] = a3;
    array[1] = b3;
    array[2] = c3;
} 