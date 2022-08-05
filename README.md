# Calculadora de trinomios
## Estructura de directorios

 - app
 - include
 - lib
	 - dll
	 - static
 - obj
 - src

## Comandos utilizados para la compilación de librerías

### Estática
    g++ -c ./src/suma -o ./obj/suma -I ./include
    g++ -c ./src/resta -o ./obj/resta -I ./include
    g++ -c ./src/multiplicacion.cc -o ./obj/multiplicacion.o -I ./include
    g++ -c ./src/division -o ./obj/division -I ./include
    g++ -c ./src/completar-trinomios -o ./obj/completar-trinomios -I ./include
    ar crs ./lib/static/libtrinomios.a ./obj/*.o   
    g++ main.cc -o app/test -I ./lib/include -L ./lib/static -ltrinomios 

### Dinámica

    ar crs ./lib/static/libtrinomios.a ./obj/*.o   

## Uso de la biblioteca
### Importación estática
Para utilizar la biblioteca estática se debe importar la cabecera dentro del archivo donde se utilizará
	
    #include  "./include/trinomios"
### Importación dinámica
Para utilizar la biblioteca estática se debe importar la cabecera dentro del archivo donde se utilizará
	
    #include  "./include/trinomios"

### Suma de Trinomios
La función **SumaTrinomios** recibe como argumentos 6 números enteros, que forman (a₁x² + b₁x + c₁) + (a₂x² + b₂x + c₂) y un apuntador a un arreglo de 3 elementos en donde se almacenará el resultado de la suma

    int  array[3];
	SumaTrinomios(1,  3,  5,  1,  2,  2,  array);

  ### Resta de Trinomios
La función **RestaTrinomios** recibe como argumentos 6 números enteros, que forman (a₁x² + b₁x + c₁) - (a₂x² + b₂x + c₂) y un apuntador a un arreglo de 3 elementos en donde se almacenará el resultado de la resta

    int  array[3];
	RestaTrinomios(1,  2,  3,  4,  5,  6,  array);
 
  ### Producto de Trinomios
La función **ProductoTrinomios** recibe como argumentos 6 números enteros, que forman (a₁x² + b₁x + c₁) * (a₂x² + b₂x + c₂) y un apuntador a un arreglo de 5 elementos en donde se almacenará el resultado de la multiplicación

    int  array[3];
	ProductoTrinomios(1,  2,  3,  4,  5,  6,  array);

  ### División de Trinomio entre binomio
La función **DivisionTrinomio_entre_binomio** recibe como argumentos 5 números enteros, que forman (a₁x² + b₁x + c₁) / (a₂x² + c₂) y un apuntador a un arreglo de 3 elementos en donde se almacenará el resultado de la división

    int  array[3];
	DivisionTrinomio_entre_binomio(1,  2,  3,  4,  5, array);

  ### Completar el Trinomio
La función **CompletarTrinomio** recibe como argumentos 3 números enteros, que forman (ax² + bx + z)  y un apuntador a un arreglo de 3 elementos en donde se almacenará el resultado de la multiplicación

    int  array[3];
	CompletarTrinomio(1,  2,  7, array);