#include <iostream>  // allows program to output data to the screen
using namespace std;
struct Base {
    virtual ~Base() = default;
    Base(){}
    virtual void do_something() {}
   
};

struct Derived1 final : Base {
    void do_something()  override{
        cout << "Derived1!!!" << endl;
    }

};

struct Derived2 final: Base {
    void do_something() override{
        cout << "Derived2!!!" << endl;
    }

};

// function main begins program execution
int main(int argc, const char *argv[]) {
    cout << "Welcome to the UNA!" << endl;

    Derived1 derived1;
    derived1.do_something();

    Derived2 derived2;
    derived2.do_something();

}  // end function main
/*
 * Se agrega "using namespace std" para facilitar escritura de "cout", posteriormente en "struct Base" el metodo virtual
 * se iguala a 0 (guiandome segun lo visto de clase, en la pagina), en las dos clases hijas: se quita el "virtual" de los
 * metodos y se corrige el error ortografico al sobreescribir el nombre del metodo de la clase padre.
 * */

/*
 * Basandome en la solucion se agrega constructor y destructor y final en hijas, se quita el "const"
 * */