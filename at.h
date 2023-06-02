#ifndef at_h
#define at_h

#include "admin.h"

const int maximo = 20;

class AT {
  private:
    int numEmpleados;
    int numAdmin;
    Planta *empPlanta[maximo];
    Administrador *empAdmin[maximo];

  public:
    AT();
    void generarEjemplo();
    void mostrarPlanta();
    void agregarEmpleado();
    int getNm(){return numEmpleados;}
};

AT :: AT(){
    numEmpleados = 0;
    numAdmin = 0;
}

void AT :: generarEjemplo(){
    empPlanta[numEmpleados] = new Planta("Chefsito" , "Jorge" , 17986795 , 100 , 3 , "Joel");
    numEmpleados++;
    empPlanta[numEmpleados] = new Planta("Cartero" , "Barry" , 17948753 , 60 , 2 , "Mifael");
    numEmpleados++;
    empPlanta[numEmpleados] = new Planta("Cartero" , "Rodrigo" , 39425798 , 200 , 3 , "Joel");
    numEmpleados++;
    empPlanta[numEmpleados] = new Planta("Mecanico" , "Alex" , 10000000 , 900 , 0 , "Jesus");
    numEmpleados++;
    empAdmin[numAdmin] = new Administrador("Chefsito" , "Jorge" , 17986795 , 100 , 3 , "Joel" , 123 , "Joel1234" , "55 3261 1049" , "Parque de Dizca 74");
    numAdmin++;
}

void AT :: mostrarPlanta(){
    for (int i = 0; i < numEmpleados; i++){
        empPlanta[i] -> imprime_info();
    }
}

void AT :: agregarEmpleado(){} //Pendiente
#endif