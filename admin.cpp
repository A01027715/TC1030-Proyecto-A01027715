#ifndef admin_h
#define admin_h

#include "planta.cpp"

class Administrador: public Empleado {
  private:
    int contrasena;
  public:
    Administrador(std::string Pue, std::string  Nom, int Mat, float Tiempo_Trabajo, int Tipo, std::string  Admi , int cont);
    int getContrasena(){return contrasena;}
    void imprime_info();
};

Administrador :: Administrador (std::string Pue, std::string  Nom, int Mat, float Tiempo_Trabajo, int Tipo, std::string  Admi , int cont) : Empleado(Pue, Nom, Mat, Tiempo_Trabajo, Tipo){
    contrasena = cont;
}

void Administrador :: imprime_info() {
    cout << "_______________________________________ \n" ;
    Empleado :: imprime_info();
    cout << "Contraseña: " << contrasena << endl;
    cout << "_______________________________________ \n\n" ;
}
#endif