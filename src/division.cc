#include "../include/trinomios"

void DivisionTrinomio_entre_binomio(int a1, int b1, int c1, int a2, int b2, int array[]) {
    if(a1%a2==0){
        array[0] = (a1 / a2);
        array[1] = ((b1 - (b2 * array[0])) / a2 );
    }
    if(a1%a2!= 0){
        array[0] = 0;
        array[1] = 0;
    }
    

     
    
}