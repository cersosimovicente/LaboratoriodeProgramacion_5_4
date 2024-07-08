# Concepto de cadena
Una cadena es un tipo de dato compuesto, un array de caracteres (`char`), terminado por un carácter nulo (`'\0'`), NULL. Una cadena es `"ABCD"` (también llamada constante de cadena o literal de cadena). En memoria esta cadena consta de cinco elementos: `'A'`, `'B'`, `'C'`, `'D'` y `'\0'`, o de otra manera, se considera que la cadena `"ABCD"` es un array de cinco elementos de tipo `char`. El valor real de una cadena es la dirección de su primer carácter y su tipo es un puntero a `char`.

El lenguaje C++ puede utilizar el manejo de cadenas de caracteres heredado de C y además implementa una clase estándar `string` que encapsula la administración de cadenas de caracteres.

El manejo de cadenas de caracteres con la clase `string` simplifica en gran medida la implementación de algoritmos y reduce la cantidad de errores que podemos cometer.

Para crear un objeto de la clase `string` podemos hacerlo de dos formas:

```cpp
string cadena1("Hola mundo");
```
o la más cómoda y legible:
```cpp
string cadena1 = "Hola mundo";
```
Para poder utilizar la clase string debemos incluir en nuestro programa:
```cpp
#include <string>
```
## Creación, inicialización por asignación y carga por teclado de un objeto de tipo string. 
```cpp
#include<string>
#include<iostream>

using namespace std;

int main()
{
    string cadena1 = "Hola mundo";
    string cadena2;
    cout << "Ingrese una cadena de caracteres sin espacios en blanco:";
    cin >> cadena2;
    cin.get();
    cout << "Primer string:" << cadena1 << "\n";
    cout << "Segundo string:" << cadena2;
    return 0;
}
```
## Usando estilo C
```cpp
#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
  char S[]="Lucas"; // cadena estática inicializada a 5 caracteres y nulo
  char S1[12] = " nombre:";
  cout << S1 << endl << endl;
  for (int i = 0; i < 6; i++){
    cout << " S[" << i << "] = " << S[i] << "\n";
  }
return 0;
}
```
```cpp
#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
  char Ejemplo[31]; // Definir array de caracteres
  cout << " introduzca frase \n ";
  cin.getline(Ejemplo,30); // lectura de cadena completa
  cout << "\t\"" << Ejemplo << "\"\n";
  cout << " introduzca otra frase \n ";
  cin >> Ejemplo; // lectura de palabra hasta encontrar blanco
  cout << "\t\"" << Ejemplo << "\"\n";
  return 0;
}
```


