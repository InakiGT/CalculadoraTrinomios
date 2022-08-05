#include <trinomios>
#include <iostream>

using namespace std;

int main(void) {

    int array[3];
    CompletarTrinomio(1, -4, 7, array);

    cout << array[2] << endl;

    return 0;
}