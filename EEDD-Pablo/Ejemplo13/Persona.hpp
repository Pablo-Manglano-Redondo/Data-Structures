#ifndef PERSONA_HPP
#define PERSONA_HPP

#include <iostream>
#include <string>

class Persona {
private:
    bool genero; // 1 = Mujer, 0 = Hombre
    int edad;
    char dni[10];

    void generarDni(); // Método para generar automáticamente el DNI
    void asignarGenero(); // Método para asignar el género de forma automática

public:
    Persona(int edad); // Constructor que recibe la edad
    ~Persona(); // Destructor

    int getEdad() const;
    bool esMujer() const;
    void setEdad(int edad);
    void mostrar() const;
};

#endif // PERSONA_HPP
