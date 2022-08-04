#include "../include/trinomios"

void DivisionTrinomio(int a1, int b1, int c1, int a2, int b2, int array[]) {
    array[0] = (a1 * a2);
    array[1] = (a1 * b2 + b1 * a2);  
    array[2] = (a1 + b1 * b2 + c1 * a2);
    array[3] = (b1 + c1 * b2);
}