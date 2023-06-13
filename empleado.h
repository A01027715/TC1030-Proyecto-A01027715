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
    int Rango;

  public:
    Empleado(std::string Pue, std::string  Nom, int Mat, float Tiempo_Trabajo, int Tipo, int Ran); //Este es el metodo constructor de Empleado
    void set_Puesto(std::string Pue); //Con este le damos valor al puesto (en el futuro se puede usar para cambiar el puesto de cualquier empleado)
    std::string  get_Nombre(){return Nombre;} //Se coloco este metodo para mas adelante recuperar el nombre del empleado y hacer una interfas personalisada
    void set_Nombre(std::string  Nombre);// Con este metodo le damos valor al nombre del empleado
    int get_Matricula(){return Matricula;} // Con este metodo mas adelante podremos identificar a los empleados en base a su matricula
    void set_Matricula(int Mat); //Con este metodo le damos valor a la matricula del empelado (Se puede usar en el futuro para cambiar la matricula de cualquier empelado)
    float get_Sueldo(){return Sueldo;} //Coloque este metodo en caso de que más adelante se agregue un metodo para recuperar unicamente el sueldo del empleado por separado
    void set_Sueldo(float Tiempo_Trabajo);//Le permite a la computadora en base a el tiempo de trabajo que sueldo tendria el empleado
    int get_Tipo_de_Empleado(){return Tipo_de_Empleado;} //Este metodo nos permite más adelante conseguir el tipo de empleado para separarlo por su area
    void set_Tipo_de_Empleado(int Tipo); //Este metodo nos permite definir el tipo de empleado (se puede usar en el futuro para definir el area del admi)
    int get_Rango(){return Rango;} //Este metodo nos permite más adelante conseguir el rango de empleado para separarlo entre planta y admin
    int set_Rango(int Ran){Rango = Ran;} //Este puede ser usado en el futuro para asender o bajar administradores
    virtual void imprime_info()=0; //Este nos permite imprimir toda la informacion del empleado en un formato especifico, tambien con este convertimos la clase en abstracta
};

Empleado::Empleado(std::string Pue, std::string  Nom, int Mat, float Tiempo_Trabajo, int Tipo, int Ran){
  Puesto= Pue;
  Nombre= Nom;
  Matricula= Mat;
  Sueldo= Tiempo_Trabajo * 50;
  Tipo_de_Empleado= Tipo;
  Rango= Ran;
}

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
	cout << "Sueldo Diario: "<< Sueldo << " USD" << endl;
  cout << "Area de trabajo: "<< Tipo_de_Empleado << endl;
}

#endif