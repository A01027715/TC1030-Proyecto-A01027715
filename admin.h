#ifndef admin_h
#define admin_h

#include <ctime>
#include "planta.h"

class Administrador: public Empleado { //Clase de los administradores que hereda informacion de la clase "Empleado"
  private:
    int contrasena; // variable para la contraseña del administrador
    std::string usuario; // varaible de nombre de usario del administrador
    std::string telefono; // variable de telefono del administrador (Se uso string para darle formato al codigo)
    std::string direccion; // variable de de la direccion de la vivienda del administrador
  public:
    Administrador(std::string Pue, std::string  Nom, int Mat, float Tiempo_Trabajo, int Tipo, int cont , std::string us , std::string tel , std::string di, int Ran); //Metodo constructor del administrador
    int getContrasena(){return contrasena;} // Consigue la contraseña que sera utilizada para acceder a los datos sencibles del administrador
    std::string getUsuario(){return usuario;} // Consigue el usuario en  caso de que se valla a necesitar en el futuro
    void setUsario (std::string us){usuario= us;} //Le da el valor a usario
    std::string getTelelfono(){return telefono;} // Consigue el usuario en  caso de que se valla a necesitar en el futuro
    void setTelefono(std::string tel){telefono= tel;} // Le da 
    std::string getDireccion(){return direccion;}
    void setDireccion(std::string di){direccion= di;};
    void imprime_info();
    virtual void imprime_info(int datosCon);
};

Administrador :: Administrador (std::string Pue, std::string  Nom, int Mat, float Tiempo_Trabajo, int Tipo, int cont , std::string us , std::string tel , std::string di, int Ran) : Empleado(Pue, Nom, Mat, Tiempo_Trabajo, Tipo, Ran){
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