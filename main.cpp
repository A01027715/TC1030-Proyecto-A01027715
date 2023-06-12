# include "at.h"

int main(){
    int x;
    int y;
    int mat;
    int con;
    AT JP;
    JP.generarEjemplo();
    cout<<endl<<"Bienvenidos a intefas de empleado de Jurassic Park"<<endl;
    cout<<"                  ,"<<endl;
    cout<<"               ,  ;:._.-`''."<<endl;
    cout<<"             ;.;'.;`      _ `."<<endl;
    cout<<"              ',;`       ( \ ,`-."<<endl;  
    cout<<"           `:.`,         (_/ ;\  `-."<<endl;
    cout<<"            ';:              / `.   `-._"<<endl;
    cout<<"          `;.;'              `-,/ .     `-."<<endl;
    cout<<"          ';;'              _    `^`       `."<<endl;
    cout<<"         ';;            ,'-' `--._          ;"<<endl;
    cout<<"':      `;;        ,;     `.    ':`,,.__,,_ /"<<endl;
    cout<<" `;`:;`;:`       ,;  '.    ;,      ';';':';;`"<<endl;
    cout<<"              .,; '    '-._ `':.;    "<<endl;
    cout<<"            .:; `          '._ `';;,"<<endl;
    cout<<"          ;:` `    :'`'       ',__.)"<<endl;
    cout<<"        `;:;:.,...;'`'"<<endl;
    cout<<"      ';. '`'::'`''  .'`'"<<endl;
    cout<<"    ,'   `';;:,..::;`'`'"<<endl;
    cout<<", .;`      `'::''`"<<endl;
    cout<<",`;`."<<endl;
    cout<<"Indique el tipo de empleado que es (insertar el numero de opcion):"<<endl<<"1. Administrador"<<endl<<"2. Empleado de planta"<<endl;
    cin >> x;
    cout<<endl<<"_______________________________________"<<endl;
    while (true){
        if (x == 1){
            cout<<"Dame tu matricula:"<<endl;
            cin >> mat;
            Empleado * trabajador= JP.encontrarEmpleado(mat);
            std::string NombreA= trabajador->Empleado::get_Nombre();
            cout<<endl<<"_______________________________________"<<endl;
            cout<<"Bienvenido "<<NombreA<<" como te puedo ayudar el dia de hoy? (insertar el numero de opcion):"<<endl<<"1. Ensenar informacion de mis empleado de planta de tu area"<<endl<<"2. Agregar empleado de planta"<<endl<<"3. Ensenar mi informacion basica"<<endl<<"4. Ensenar mi informacion avanzada"<<endl<<"5. Cerrar sesion"<<endl;
            cin>> y;
            cout<<endl<<"_______________________________________"<<endl;

            while (true){

                if (y==1){
                    int adm= trabajador->Empleado::get_Tipo_de_Empleado();
                    JP.mostrarPlanta(adm);
                }

                else if (y==2){
                    int adm= trabajador->Empleado::get_Tipo_de_Empleado();
                    JP.agregarEmpleado(adm, NombreA);
                    cout<<endl<<"_______________________________________"<<endl;
                }

                else if (y==3){
                    trabajador -> imprime_info();
                }

                else if (y==4){
                    cout<<"Contraseña de acceso: "<<endl;
                    cin>> con;
                    trabajador -> imprime_info();
                }

                else if (y==5){break;}

                else {
                    cout<<"ERROR DE RESPUESTA, ESA RESPUESTA NO ES PARTE DE LAS OPCIONES, PORFAVOR VUELVA A INTANTAR"<<endl;
                }

                cout<<"Bienvenido "<<NombreA<<" como te puedo ayudar el dia de hoy? (insertar el numero de opcion):"<<endl<<"1. Ensenar informacion de mis empleado de planta de tu area"<<endl<<"2. Agregar empleado de planta"<<endl<<"3. Ensenar mi informacion basica"<<endl<<"4. Ensenar mi informacion avanzada"<<endl<<"5. Cerrar sesion"<<endl;
                cin >> y;
                cout<<endl<<"_______________________________________"<<endl;
            }
            break;
        }

        else if (x == 2) {
            cout<<"Dame tu matricula:"<<endl;
            cin >> mat;
            Empleado * trabajador= JP.encontrarEmpleado(mat);
            std::string NombreA= trabajador -> Empleado::get_Nombre();
            cout<<endl<<"_______________________________________"<<endl;
            cout<<"Bienvenido "<<NombreA<<", esta es la informacion que nosotros le podemos proporcionar: "<<endl<<"1. Mi informacion de Empleado"<<endl<<"2. Volver al inicio"<<endl<<"3. Cerrar sesion"<<endl;
            cin >> y;
            if (y == 1){
                trabajador -> imprime_info();
            }
            else if (y == 3){break;}
        }

        else {
            cout<<"ERROR, VUELVA A INTANTAR"<<endl;
        }

        cout<<"Que tipo de empleado eres? (Entrega el numero de opcion)"<<endl;
        cout<<"1. Administrador"<<endl;
        cout<<"2. Empleado de planta"<<endl;
        cin >> x;
        cout<<endl<<"_______________________________________"<<endl;
    }
}