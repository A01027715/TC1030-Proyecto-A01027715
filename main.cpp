/*
 *
 * Proyecto Interfaz de Jurassic Park
 * Ulises Orlando Carrizalez Lerín
 * A01027715
 * 13/06/2023
 * versio : 2
 * Como proyecto de TC1030 realize el siguiente trabajo. Este trata de una interfaz 
 * de empleado para Jurassic Park, en esta puede acceder tano administradores como empleados, 
 * los empleados podrán revisar su estatus como empleado (Nombre, Matricula, Área de trabajo 
 * (1,2,3), Sueldo, puesto y administrador a cargo). Mientras que los administradores tendran 
 * las misma capacidad que el empleado de planta, tambien puede enseñar los empleados de su area 
 * de trabajo que estan a su cargo, agregar nuevos empleados, enseñar informacion basica del administrador 
 * y revisar su informacion sencible, pero requiere dar su contraseña para ello, si falla, el programa se 
 * va a burlar cual Jurassic Park. El programa ya tendra de informacion base 3 Areas de trabajo, con 4 empleados 
 * de planta y 1 administrador (La informacion de cada empleado esta en el excel "Empleado JP.xlsx" para que pueda 
 * probar cada empleado).
*/

# include "at.h" //biblioteca con mis objetos a usar (hay puentes ente unos y otros, por lo que solo necesito llamar uno de las bibliotecas y solitas se llaman el resto)

int main(){ //
    int x;
    int y;
    int mat;
    int con;
    AT JP;
    JP.generarEjemplo();
    //Imprime el logo de Jurassic Park y da la bievenida
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
    while (true){
        //Empieza solicitando que tipo de empleado es
        cout<<"_______________________________________"<<endl;
        cout<<"Indique el tipo de empleado que es (insertar el numero de opcion):"<<endl<<"1. Administrador"<<endl<<"2. Empleado de planta"<<endl<<"3. Apagar sistema"<<endl;
        cin >> x;
        cout<<endl<<"_______________________________________"<<endl;
        if (x == 1){
            //Si es un admi
            cout<<"Dame tu matricula:"<<endl; //solicita la matricula
            cin >> mat;
            Empleado * trabajador= JP.encontrarEmpleado(mat); //usa .econtrarEmpleado para buscar el empleado en base a su matricula
            if (trabajador -> Empleado::get_Rango() != 1){
                cout<<"ERROR, EL DUENO DE LA MATRICULA NO ES UN ADMINISTRADOR"<<endl; //imprime esto y regresa al inicio si la matricula no es de administrador
            }
            else {
                std::string NombreA= trabajador -> Empleado::get_Nombre();
                while (true){
                    //Despliega el menu de opciones
                    cout<<endl<<"_______________________________________"<<endl;
                    cout<<"Bienvenido "<<NombreA<<" como te puedo ayudar el dia de hoy? (insertar el numero de opcion):"<<endl<<"1. Ensenar informacion de mis empleado de planta de tu area"<<endl<<"2. Agregar empleado de planta"<<endl<<"3. Ensenar mi informacion basica"<<endl<<"4. Ensenar mi informacion avanzada"<<endl<<"5. Cerrar sesion"<<endl;
                    cin>> y;
                    cout<<endl<<"_______________________________________"<<endl;

                    if (y==1){
                        int adm= trabajador -> Empleado::get_Tipo_de_Empleado();
                        JP.mostrarPlanta(adm);
                    }

                    else if (y==2){
                        int adm= trabajador -> Empleado::get_Tipo_de_Empleado();
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
                }
            }
        }

        else if (x == 2) {
            cout<<"Dame tu matricula:"<<endl;
            cin >> mat;
            Empleado * trabajador= JP.encontrarEmpleado(mat);

            if (trabajador -> Empleado::get_Rango() != 2){
                cout<<"ERROR, EL DUENO DE LA MATRICULA NO ES UN EMPLEADO DE PALANTA"<<endl;
            }

            else {
                std::string NombreA= trabajador -> Empleado::get_Nombre();
                while (true){
                    cout<<endl<<"_______________________________________"<<endl;
                    cout<<"Bienvenido "<<NombreA<<", esta es la informacion que nosotros le podemos proporcionar: "<<endl<<"1. Mi informacion de Empleado"<<endl<<"2. Cerrar sesion"<<endl;
                    cin >> y;

                    if (y == 1){
                        trabajador -> imprime_info();
                        cout<<endl<<"_______________________________________"<<endl;
                    }
                    
                    else if (y == 2){break;}
                }
                
            }
        
        }

        else if (x == 3){break;}

        else {
            cout<<"ERROR, VUELVA A INTANTAR"<<endl;
        }
    }
}