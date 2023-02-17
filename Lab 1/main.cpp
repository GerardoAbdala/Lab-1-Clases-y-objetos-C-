/*Archivo del programa principal*/

#include <iostream>
#include "src/Estudiante.cpp"


int main()
{
    Estudiante gerardo("Gerardo");
    Estudiante gcalif1(100);
    Estudiante gcalif2(40);
    Estudiante gcalif3(67);
    Estudiante gcalif4(96);
    Estudiante gcalif5(72);
 
    
    Estudiante pedro("Pedro");
    Estudiante pcalif1(83);
    Estudiante pcalif2(100);
    Estudiante pcalif3(92);
    Estudiante pcalif4(67);
    Estudiante pcalif5(93);

    Estudiante luis("Luis");
    Estudiante lcalif1(57);
    Estudiante lcalif2(63);
    Estudiante lcalif3(57);
    Estudiante lcalif4(50);
    Estudiante lcalif5(61);

    Estudiante rodrigo("Rodrigo");
    Estudiante rcalif1(53);
    Estudiante rcalif2(64);
    Estudiante rcalif3(97);
    Estudiante rcalif4(100);
    Estudiante rcalif5(78);

    Estudiante sam("Sam");
    Estudiante scalif1(86);
    Estudiante scalif2(78);
    Estudiante scalif3(81);
    Estudiante scalif4(75);
    Estudiante scalif5(67);

    float gprom = (float(gcalif1.get_calificacion())+gcalif2.get_calificacion()+gcalif3.get_calificacion()+gcalif4.get_calificacion()+gcalif5.get_calificacion())/5;
    float pprom = (float(pcalif1.get_calificacion())+pcalif2.get_calificacion()+pcalif3.get_calificacion()+pcalif4.get_calificacion()+pcalif5.get_calificacion())/5;
    float lprom = (float(lcalif1.get_calificacion())+lcalif2.get_calificacion()+lcalif3.get_calificacion()+lcalif4.get_calificacion()+lcalif5.get_calificacion())/5;
    float rprom = (float(rcalif1.get_calificacion())+rcalif2.get_calificacion()+rcalif3.get_calificacion()+rcalif4.get_calificacion()+rcalif5.get_calificacion())/5;
    float sprom = (float(scalif1.get_calificacion())+scalif2.get_calificacion()+scalif3.get_calificacion()+scalif4.get_calificacion()+scalif5.get_calificacion())/5;

    float promgrup = (gprom+pprom+lprom+rprom+sprom)/5;

    std::cout<<"Nombre: "<<gerardo.get_nombre()<<"\n";
    std::cout<<"Calificacion: "<<gcalif1.get_calificacion()<<"\n";
    std::cout<<"Calificacion: "<<gcalif2.get_calificacion()<<"\n";
    std::cout<<"Calificacion: "<<gcalif3.get_calificacion()<<"\n";
    std::cout<<"Calificacion: "<<gcalif4.get_calificacion()<<"\n";
    std::cout<<"Calificacion: "<<gcalif5.get_calificacion()<<"\n";


    std::cout<<"\nPromedio: "<<gprom<<"\n\n";

    std::cout<<"Nombre: "<<pedro.get_nombre()<<"\n";
    std::cout<<"Calificacion: "<<pcalif1.get_calificacion()<<"\n";
    std::cout<<"Calificacion: "<<pcalif2.get_calificacion()<<"\n";
    std::cout<<"Calificacion: "<<pcalif3.get_calificacion()<<"\n";
    std::cout<<"Calificacion: "<<pcalif4.get_calificacion()<<"\n";
    std::cout<<"Calificacion: "<<pcalif5.get_calificacion()<<"\n";

    std::cout<<"\nPromedio: "<<pprom<<"\n\n";

    std::cout<<"Nombre: "<<luis.get_nombre()<<"\n";
    std::cout<<"Calificacion: "<<lcalif1.get_calificacion()<<"\n";
    std::cout<<"Calificacion: "<<lcalif2.get_calificacion()<<"\n";
    std::cout<<"Calificacion: "<<lcalif3.get_calificacion()<<"\n";
    std::cout<<"Calificacion: "<<lcalif4.get_calificacion()<<"\n";
    std::cout<<"Calificacion: "<<lcalif5.get_calificacion()<<"\n";

    std::cout<<"\nPromedio: "<<lprom<<"\n\n";

    std::cout<<"Nombre: "<<rodrigo.get_nombre()<<"\n";
    std::cout<<"Calificacion: "<<pcalif1.get_calificacion()<<"\n";
    std::cout<<"Calificacion: "<<pcalif2.get_calificacion()<<"\n";
    std::cout<<"Calificacion: "<<pcalif3.get_calificacion()<<"\n";
    std::cout<<"Calificacion: "<<pcalif4.get_calificacion()<<"\n";
    std::cout<<"Calificacion: "<<pcalif5.get_calificacion()<<"\n";

    std::cout<<"\nPromedio: "<<pprom<<"\n\n";

    std::cout<<"Nombre: "<<sam.get_nombre()<<"\n";
    std::cout<<"Calificacion: "<<scalif1.get_calificacion()<<"\n";
    std::cout<<"Calificacion: "<<scalif2.get_calificacion()<<"\n";
    std::cout<<"Calificacion: "<<scalif3.get_calificacion()<<"\n";
    std::cout<<"Calificacion: "<<scalif4.get_calificacion()<<"\n";
    std::cout<<"Calificacion: "<<scalif5.get_calificacion()<<"\n";

    std::cout<<"\nPromedio: "<<sprom<<"\n\n";


    std::cout<<"\n\nPromedio grupal:"<<promgrup;

   

    return 0;

}


