#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Definicion de Clase
struct TAlumno
{
    string nombre;
    string apellido;
    int edad;
    string id;
    
    void hablar()
    {
        cout << "Mi nombre es " << nombre << " " << apellido << endl;
        cout << "Mi id es " << id << " y tengo " << edad << " años" << endl;
    }
};

int main ()
{
    // Inicializar y declarar
    int x;
    
    int y;  // Declarar 
    y = 10; // Inicializar
    
    // Inicializar y declarar
    TAlumno juan = {"Juan", "Rojas", 18, "2D345F4"};
    TAlumno jaimito; // Declarar 
    // Inicializar
    jaimito.nombre = "Jaimito";
    jaimito.apellido = "Quevedo";
    jaimito.edad = 70;
    jaimito.id = "3R572H9";
    
    juan.hablar();
    jaimito.hablar();
    
    return 0;
}