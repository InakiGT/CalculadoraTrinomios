# Calculadora de trinomios
## Estructura de directorios

 - app
    - test
    - test1
    - test2
 - include
    - trinomios
 - lib
	 - dll
        - libtrinomios.dll
	 - static
        - trinomios.lib
 - obj
    - completar-trinomio.o
    - division.o
    - multiplicacion.o
    - resta.o
    - suma.o
 - src
    - suma.cc
    - resta.cc
    - multiplicacion.cc
    - division.cc
    - completar-trinomio.cc

## Comandos utilizados para la compilación de bibliotecas

### Estática
    g++ -c ./src/suma.cc -o ./obj/suma.o -I ./include
    g++ -c ./src/resta.cc -o ./obj/resta.o -I ./include
    g++ -c ./src/multiplicacion.cc -o ./obj/multiplicacion.o -I ./include
    g++ -c ./src/division.cc -o ./obj/division.o -I ./include
    g++ -c ./src/completar-trinomio.cc -o ./obj/completar-trinomio.o -I ./include
    ar crs ./lib/static/libtrinomios.a ./obj/*.o
    ar crs .\lib\static\trinomios.lib .\obj\*.o # Windows

### Dinámica
    g++ -c -fPIC ./src/suma.cc -o ./obj/suma.o -I ./include
    g++ -c -fPIC ./src/resta.cc -o ./obj/resta.o -I ./include
    g++ -c -fPIC ./src/multiplicacion.cc -o ./obj/multiplicacion.o -I ./include
    g++ -c -fPIC ./src/division.cc -o ./obj/division.o -I ./include
    g++ -c -fPIC ./src/completar-trinomio.cc -o ./obj/completar-trinomio.o -I ./include
    g++ -shared -o ./lib/dll/libtrinomios.so ./obj/*o 
    g++ -shared -o .\lib\dll\libtrinomios.dll .\obj\*.o # Windows
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

    int  array[5];
	ProductoTrinomios(1,  2,  3,  4,  5,  6,  array);

  ### División de Trinomio entre binomio
La función **DivisionTrinomioEntreBinomio** recibe como argumentos 5 números enteros, que forman (a₁x² + b₁x + c₁) / (a₂x² + c₂) y un apuntador a un arreglo de 2 elementos en donde se almacenará el resultado de la división sin residuo

    int  array[2];
	DivisionTrinomioEntreBinomio(2,  2,  5,  4,  5,  array);

  ### Completar el Trinomio
La función **CompletarTrinomio** recibe como argumentos 3 números enteros, que forman (ax² + bx + z)  y un apuntador a un arreglo de 3 elementos en donde se almacenará el resultado de la multiplicación

    int  array[3];
	CompletarTrinomio(1,  2,  7, array);
