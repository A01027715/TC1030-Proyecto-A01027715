# include "at.h"

int main(){
    bool Continuar = true;
    int x;
    int mat;
    AT ejemplo;
    ejemplo.generarEjemplo();
    cout<<"Bienvenidos a intefas de empleado de Jurassic Park"<<endl;
    cout<<"Que tipo de empleado eres? (Entrega el numero de opcion)"<<endl;
    cout<<"1. Administrador"<<endl;
    cout<<"2. Empleado de planta"<<endl;
    cin >> x;
    while (true){
    if (x == 1){
        cout<<"Dame tu matricula:"<<endl;
        cin >> mat;
        Empleado * trabajador= ejemplo.encontrarEmpleado(mat);
        cout<<"_______________________________________"<<endl;
        cout<<"Que necesitas:"<<endl<<"1. Ensenar informacion empleado de planta de tu area"<<endl<<"2. Agregar empleado de planta"<<endl;
        break;
    }
    else if (x==2){
        cout<<"Dame tu matricula:"<<endl;
        cin >> mat;
        Empleado * trabajador= ejemplo.encontrarEmpleado(mat);
        trabajador -> imprime_info();
        break;
    }
    else {
        cout<<"ERROR, VUELVA A INTANTAR"<<endl;
    }
    cout<<"Que tipo de empleado eres? (Entrega el numero de opcion)"<<endl;
    cout<<"1. Administrador"<<endl;
    cout<<"2. Empleado de planta"<<endl;
    cin >> x;
    }
}