#include <iostream>
#include <set>
#include <ctime>  // Incluir la cabecera para usar time()
#include "Persona.hpp"

int main() {
    srand(time(0)); // Inicializa la semilla para números aleatorios

    std::set<int> edadesUtilizadas; // Para evitar edades repetidas
    Persona* personas[10];

    for (int i = 0; i < 10; i++) {
        int edad;
        do {
            edad = rand() % 10 + 18; // Genera una edad entre 18 y 27
        } while (edadesUtilizadas.find(edad) != edadesUtilizadas.end());

        edadesUtilizadas.insert(edad);
        personas[i] = new Persona(edad);
    }

    // Mostrar información de las personas creadas
    for (int i = 0; i < 10; i++) {
        std::cout << "Persona " << i + 1 << ":\n";
        personas[i]->mostrar();
        std::cout << "----------------------\n";
    }

    // Liberar la memoria
    for (int i = 0; i < 10; i++) {
        delete personas[i];
    }

    return 0;
}
