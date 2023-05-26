#ifndef empleado_h
#define empleado_h

#include <iostream>
#include <string>

using namespace std;

class Empleado {
  private:
    std::string Puesto;
    std::string Nombre;
    int Matricula;
    float Sueldo;
    int Tipo_de_Empleado;

  public:
    Empleado(std::string Pue, std::string  Nom, int Mat, float Tiempo_Trabajo, int Tipo);
    std::string  get_Puesto(){return Puesto;}
    void set_Puesto(std::string Pue);
    std::string  get_Nombre(){return Nombre;}
    void set_Nombre(std::string  Nombre);
    int get_Matricula(){return Matricula;}
    void set_Matricula(int Mat);
    float get_Sueldo(){return Sueldo;}
    void set_Sueldo(float Tiempo_Trabajo);
    int get_Tipo_de_Empleado(){return Tipo_de_Empleado;}
    void set_Tipo_de_Empleado(int Tipo);
    void imprime_info();
};

Empleado::Empleado(std::string Pue, std::string  Nom, int Mat, float Tiempo_Trabajo, int Tipo){
  Puesto= Pue;
  Nombre= Nom;
  Matricula= Mat;
  Sueldo= Tiempo_Trabajo * 1250;
  Tipo_de_Empleado= Tipo;
};

void Empleado :: set_Puesto(std::string  Pue){
  Puesto = Pue;
}
void Empleado :: set_Nombre(std::string  Nom){
  Nombre = Nom;
}
void Empleado :: set_Matricula(int Mat){
  Matricula = Mat;
}
void Empleado :: set_Tipo_de_Empleado(int Tipo){
  Tipo_de_Empleado = Tipo;
}
void Empleado :: set_Sueldo(float Tiempo_Trabajo){
  Sueldo= Tiempo_Trabajo * 1250;
}

void Empleado::imprime_info(){
	cout << "Nombre: "<< Nombre << endl;
	cout << "Matricula: "<< Matricula << endl;
	cout << "Puesto: "<< Puesto << endl;
	cout << "Sueldo: "<< Sueldo << endl;
    cout << "Area de trabajo: "<< Tipo_de_Empleado << endl;
}

#endif