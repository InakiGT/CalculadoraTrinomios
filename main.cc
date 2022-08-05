#include "./include/trinomios"
#include <iostream>

using namespace std;

int main(void) {

    int array[3];
    CompletarTrinomio(1, -4, 7, array);
    cout << array[2] << endl;
    SumaTrinomios(4, -2, 6, 3, -1, 4, array);
    cout << array[0] << " x^2 " << array[1] << " x " << array[2]<< endl;
    RestaTrinomios(4, -2, 6, 3, -1, 4, array);
    cout << array[0] << " x^2 " << array[1] << " x " << array[2]<< endl;
    ProductoTrinomios(4, -2, 6, 3, -1, 4, array);
    cout << array[0] << " x^2 " << array[1] << " x " << array[2]<< endl;
    DivisionTrinomio_entre_binomio(10, 7, -6, -5, 6, array);
    cout << array[0] << " x^2 " << array[1] << " x " << endl;

    return 0;
}