#include "Persona.hpp"
#include <cstdlib>
#include <ctime>

// Constructor
Persona::Persona(int edad) : edad(edad) {
    generarDni();
    asignarGenero();
}

// Destructor
Persona::~Persona() {
    // Aquí no es necesario liberar recursos, ya que no estamos usando punteros
}

// Genera un DNI aleatorio con una letra
void Persona::generarDni() {
    for (int i = 0; i < 8; i++) {
        dni[i] = '0' + rand() % 10; // Genera un número entre 0 y 9
    }
    dni[8] = 'A' + rand() % 26; // Genera una letra aleatoria
    dni[9] = '\0'; // Fin de la cadena
}

// Asigna género de manera aleatoria (1 = Mujer, 0 = Hombre)
void Persona::asignarGenero() {
    genero = rand() % 2;
}

// Devuelve la edad de la persona
int Persona::getEdad() const {
    return edad;
}

// Devuelve si la persona es mujer (1 = Mujer, 0 = Hombre)
bool Persona::esMujer() const {
    return genero;
}

// Establece una nueva edad
void Persona::setEdad(int nuevaEdad) {
    edad = nuevaEdad;
}

// Muestra la información completa de la persona
void Persona::mostrar() const {
    std::cout << "DNI: " << dni << "\n";
    std::cout << "Género: " << (genero ? "Mujer" : "Hombre") << "\n";
    std::cout << "Edad: " << edad << "\n";
}
