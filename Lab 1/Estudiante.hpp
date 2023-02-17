/*Definiciones de la clase*/

#include <string>

class Estudiante
{
    public:
        Estudiante(std::string nombre);
        std::string get_nombre();

        Estudiante(int calificacion);
        int get_calificacion();


    private:
        std::string nombre;
        int calificacion;


};


