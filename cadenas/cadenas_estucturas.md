# Test sobre estructuras y arreglos de estructuras
1. Dada la siguiente definición de una estructura de datos, ¿cómo se declara un vector de 10 elementos de tipo `product` y se asignan valores al primer elemento?
```cpp
    struct product{
        int id;
        string name;
        char description[100];
        float price;
        int quantity;
    };
```
2. Indique qué afirmación en relación con el siguiente programa es correcta:
```cpp
struct person{
        char name[50];
        int age;
    };

    struct filming {
        char place[50];
        float budget;
    };

    struct movie {
        struct person director;
        struct person actor1;
        struct person actor2;
        struct filming location;
    };

```

* a) Se producirá un error de compilación porque la estructura `person` está repetida
en tres miembros de la estructura `movie`.
* b) Se produce un error de compilación porque un miembro de una estructura no
puede ser otra estructura.
* c) La  sentencia `strcpy(my_movie.director.name, "Federico Fellini");`genera un error en tiempo de compilación.
* d) Todas las afirmaciones anteriores son falsas.

3. Utilizando la estructura del punto 1a, analizá el siguiente programa.
```cpp
    cout << "enter product: " << endl;
    struct product p1;
    cout <<"enter id" << endl;
    cin >> p1.id;
    cout << "enter name" << endl;
    getline(cin, p1.name);
    cout << "enter description" << endl;
    cin.getline(p1.description, 100);
    cout << "enter price" << endl;
    cin >> p1.price;
    cout << "enter quantity" << endl;
    cin >> p1.quantity;
    cout << p1.id << endl;
    cout << p1.name << endl;
    cout << p1.description << endl;
    cout << p1.price << endl;
    cout << p1.quantity << endl;
    cout << "------------------" << endl;
```
* Ejecuta el codigo en el compilador
* Funciona correctamente? Si/No
* En caso que no funcione, dar una solucion y fundamentarla.

# Ejercicio práctico
Te piden que realices un programa para la gestion de una biblioteca.
Los datos de los libros son los siguiente:
* título
* autor
* ISBN (cadena de 17 caracteres) 
* prestado (true/false)

Escribir el programa en C++ que:

* Defina una estructura para almacenar los datos de cualquier libro.
* Ingresa los datos de 2 libros por teclado y almacenarlos en un arreglo
* Verificar que los datos ingresados no representan ejemplares de un mismo tipo
* Imprimir los datos por pantalla

#### ***Nota*** 
Utilizar funciones para todas las operaciones