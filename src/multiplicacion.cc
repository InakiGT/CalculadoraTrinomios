#include "../include/trinomios"

void ProductoTrinomios(int a1, int b1, int c1, int a2, int b2, int c2, int array[]) {
    array[0] = (a1 * a2);
    array[1] = (a1 * b2 + b1 * a2);  
    array[2] = (a1 * c2 + b1 * b2 + c1 * a2);
    array[3] = (b1 * c2 + c1 * b2);
    array[4] = (c1 * c2);
}