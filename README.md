# Lab01 - Herencia

El siguiente código en **C++** corre perfectamente, sin embargo tiene varios puntos que tienen que mejorar siguiendo los principos de la herencia de clases, accesos, sobre-escritura, funciones virtuales y destructores.

```c++
#include <iostream>  // allows program to output data to the screen

struct Base {
    virtual void do_something() {}
};

struct Derived1 : Base {
    virtual void do_semothing() {
        std::cout << "Derived1!!!" << std::endl;
    }
};

struct Derived2 : Base {
    virtual void do_semothing() {
        std::cout << "Derived2!!!" << std::endl;
    }
};

// function main begins program execution
int main(int argc, const char *argv[]) {
    std::cout << "Welcome to the UNA!" << std::endl;

    Derived1 derived1;
    derived1.do_semothing();

    Derived2 derived2;
    derived2.do_semothing();

}  // end function main
```

## Instrucciones:

- Corregir los errores del código anterior
- Convertir este proyecto siguiendo la estructura de CMake utilizando un folder de src para ubicar las clases del proyecto
- Convertir los structs a clases de C++ siguiendo el estandar de definición (*.h) e implementación (*.cpp)
  - Recordemos que las clases minimo debe de tener: Constructores, destructores, propiedades, métodos get/set, y toString()
- Correr el ejercicio y subirlo a GitHub
