#include <Cola.hpp>

int main(int argc, char **argv)
{
    Cola cola;

    cola.insertar(1);
    cola.insertar(2);
    cola.insertar(3);
    cola.insertar(4);
    cola.mostrar();

    int primero = cola.verPrimero();
    cola.eliminar();
    cout << "\nDespues de extraer el primero (" << primero << ")..." << endl;
    cola.mostrar();

    cola.insertar(5);
    cola.mostrar();
    cola.eliminar();
    cola.mostrar();
    cola.eliminar();
    cola.mostrar();
    cola.eliminar();
    cola.mostrar();
    cola.eliminar();
    cola.mostrar();

    return 0;
}
