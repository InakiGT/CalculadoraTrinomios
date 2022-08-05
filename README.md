# Calculadora de trinomios
## Estructura de directorios

 - app
 - include
    - trinomios
 - lib
	 - dll
        - libtrinomios.so
	 - static
        - libtrinomios.a
 - obj
 - src
    - suma.cc
    - resta.cc
    - multiplicacion.cc
    - division.cc
    - completar-trinomio.cc

## Comandos utilizados para la compilación de librerías

### Estática
    g++ -c ./src/suma.cc -o ./obj/suma.o -I ./include
    g++ -c ./src/resta.cc -o ./obj/resta.o -I ./include
    g++ -c ./src/multiplicacion.cc -o ./obj/multiplicacion.o -I ./include
    g++ -c ./src/division.cc -o ./obj/division.o -I ./include
    g++ -c ./src/completar-trinomio.cc -o ./obj/completar-trinomio.o -I ./include
    ar crs ./lib/static/libtrinomios.a ./obj/*.o

### Dinámica
    g++ -c -fPIC ./src/suma.cc -o ./obj/suma.o -I ./include
    g++ -c -fPIC ./src/resta.cc -o ./obj/resta.o -I ./include
    g++ -c -fPIC ./src/multiplicacion.cc -o ./obj/multiplicacion.o -I ./include
    g++ -c -fPIC ./src/division.cc -o ./obj/division.o -I ./include
    g++ -c -fPIC ./src/completar-trinomio.cc -o ./obj/completar-trinomios.o -I ./include
    g++ -shared -o libtrinomios.so ./obj/completar-trinomio.o ./obj/multiplicacion.o ./obj/suma.o ./obj/resta.o 
## Uso de la biblioteca
### Importación estática
Para utilizar la biblioteca estática se debe importar la cabecera dentro del archivo donde se utilizará
	
    #include  "./include/trinomios"
### Importación dinámica
Para utilizar la biblioteca dinámica se debe importar la cabecera dentro del archivo donde se utilizará
	
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

  ### División de Trinomios
La función **DivisionTrinomios** recibe como argumentos 5 números enteros, que forman (a₁x² + b₁x + c₁) / (a₂x² + c₂) y un apuntador a un arreglo de 3 elementos en donde se almacenará el resultado de la multiplicación

    int  array[3];
	DivisionTrinomios(1,  2,  3,  4,  5,  6,  array);

  ### Completar el Trinomio
La función **CompletarTrinomio** recibe como argumentos 3 números enteros, que forman (ax² + bx + z)  y un apuntador a un arreglo de 3 elementos en donde se almacenará el resultado de la multiplicación

    int  array[3];
	CompletarTrinomio(1,  2,  7, array);