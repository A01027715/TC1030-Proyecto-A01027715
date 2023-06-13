#ifndef planta_h
#define planta_h

#include "empleado.h"


class Planta: public Empleado {
  private: 
    std::string Administrador_Area; //Es la variable del nombre del Administrador

  public:
    Planta(std::string Pue, std::string  Nom, int Mat, float Tiempo_Trabajo, int Tipo, std::string  Admi, int Ran ); //Metodo constructor del empleado de palata
    void imprime_info(); //Con este metodo imprimimos la informacion basica del empelado de planta
};

Planta :: Planta (std::string Pue, std::string  Nom, int Mat, float Tiempo_Trabajo, int Tipo, std::string  Admi, int Ran ) : Empleado (Pue, Nom, Mat, Tiempo_Trabajo, Tipo, Ran){
    Administrador_Area= Admi;
}

void Planta :: imprime_info (){
    cout << "_______________________________________ \n" ;
    Empleado :: imprime_info();
    cout << "Administrador: " << Administrador_Area << endl;
    cout << "_______________________________________ \n\n" ;
}

#endif