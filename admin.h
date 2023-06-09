#ifndef admin_h
#define admin_h

#include <ctime>
#include "planta.h"

class Administrador: public Empleado {
  private:
    int contrasena;
    std::string usuario;
    std::string telefono;
    std::string direccion;
  public:
    Administrador(std::string Pue, std::string  Nom, int Mat, float Tiempo_Trabajo, int Tipo, std::string  Admi , int cont , std::string us , std::string tel , std::string di);
    int getContrasena(){return contrasena;}
    std::string getUsuario(){return usuario;}
    void setUsario (std::string us){usuario= us;}
    std::string getTelelfono(){return telefono;}
    void setTelefono(std::string tel){telefono= tel;}
    std::string getDireccion(){return direccion;}
    void setDireccion(std::string di){direccion= di;};
    void imprime_info();
    void imprime_info(int datosCon);
};

Administrador :: Administrador (std::string Pue, std::string  Nom, int Mat, float Tiempo_Trabajo, int Tipo, std::string  Admi , int cont , std::string us , std::string tel , std::string di) : Empleado(Pue, Nom, Mat, Tiempo_Trabajo, Tipo){
    usuario = us;
    telefono = tel;
    direccion = di;
    contrasena = cont;
}

void Administrador :: imprime_info() {
    cout << "_______________________________________ \n" ;
    Empleado :: imprime_info();
    cout << "Usuario: " << usuario << endl;
    cout << "_______________________________________ \n\n" ;
}


void Administrador :: imprime_info(int datosCon){
  if (datosCon == contrasena){
    cout << "_______________________________________ \n" ;
    cout << "Usuario: " << usuario << endl;
    cout << "Contraseña: " << contrasena << endl;
    cout << "Telefono: " << telefono << endl;
    cout << "Direccion: " << direccion << endl;
    cout << "_______________________________________ \n\n" ;
  }
  else {
    for (int i = 0; i < 5; i ++){
      cout << "Na Na Na, No dijiste la palabra magica"<< endl;
    }
  }
}
#endif