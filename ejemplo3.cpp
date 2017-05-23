#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
using namespace std;

struct TEmpleado
{
    string nombre;
    string apellido;
    float SueldoPorHora;
    
    float sueldoTotal(int horas)
    {
        return horas*SueldoPorHora;
    }
};

int menu()
{
     int opcion = 0;
     
    do
    {
        system ("clear");
        cout << "MENU" << endl;
        cout << string(4, '~') << endl << endl;
        
        cout << "1. Ingresar Empleado" << endl;
        cout << "2. Listar Empleados" <<  endl;
        cout << "0. Para salir" << endl <<  endl;
        cout << "Opcion :";
        cin >> opcion;
        return opcion;
    }
    while (opcion < 0 || opcion > 2);
}

int main ()
{
    vector<TEmpleado> listaEmpleados;
    string nombre;
    string apellido;
    float SueldoPorHora;
    TEmpleado empleado;
    int opcion = 0;
    
    do 
    {
        opcion = menu();
        switch (opcion)
        {
            case 1:  // Añadir un empleado
                    system ("clear");
                    cout << "Ingrese el nombre :"; cin >> nombre;
                    cout << "Ingrese el apellido :"; cin >> apellido;
                    cout << "Ingrese el sueldo :"; cin >> SueldoPorHora;
                    empleado = {nombre, apellido, SueldoPorHora};
                    listaEmpleados.push_back(empleado);
                    break;
            case 2:  // Listar los empleados
                    system ("clear");
                    for(auto i: listaEmpleados)
                    {
                        cout << i.nombre << " " << i.apellido << endl;
                    }
                    cin.get();
    
                    break;
            case 0:
                    break;
        }
    }
    while (opcion != 0);
    
    return 0;
}