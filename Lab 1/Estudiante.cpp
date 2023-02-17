/*Archivo de implementaciones de la clase*/

#include "Estudiante.hpp"

Estudiante::Estudiante(std::string nombre)
{
    this->nombre = nombre;

};

Estudiante::Estudiante(int calificacion)
{
    this->calificacion = calificacion;

};

std::string Estudiante::get_nombre()
{
    return nombre;

};

int Estudiante::get_calificacion()
{
    return calificacion;
};