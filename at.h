#ifndef at_h
#define at_h

#include "admin.h"

const int maximo = 20;

class AT {
  private:
    int numEmpleados;
    int numAdmin;
    Empleado *emp[maximo];

  public:
    AT();
    void generarEjemplo();
    void mostrarPlanta();
    void agregarEmpleado();
    Empleado * encontrarEmpleado(int mat);
    int getNm(){return numEmpleados;}
};

AT :: AT(){
    numEmpleados = 0;
    numAdmin = 0;
}

void AT :: generarEjemplo(){
    emp[numEmpleados] = new Planta("Chefsito" , "Jorge" , 17986795 , 100 , 3 , "Joel");
    numEmpleados++;
    emp[numEmpleados] = new Planta("Cartero" , "Barry" , 17948753 , 60 , 2 , "Mifael");
    numEmpleados++;
    emp[numEmpleados] = new Planta("Cartero" , "Rodrigo" , 39425798 , 200 , 3 , "Joel");
    numEmpleados++;
    emp[numEmpleados] = new Planta("Mecanico" , "Alex" , 10000000 , 900 , 0 , "Jesus");
    numEmpleados++;
    emp[numAdmin] = new Administrador("Chefsito" , "Jorge" , 17986795 , 100 , 3 , "Joel" , 123 , "Joel1234" , "55 3261 1049" , "Parque de Dizca 74");
    numAdmin++;
}

void AT :: mostrarPlanta(){
    for (int i = 0; i < numEmpleados; i++){
        emp[i] -> imprime_info();
    }
}

void AT :: agregarEmpleado(){}

Empleado *AT :: encontrarEmpleado(int mat){
    for (int i = 0; i < numEmpleados; i++){
        if (emp[i] -> Empleado :: get_Matricula() == mat){
            return emp[i];
        }
        else {

        }
    }
}
#endif