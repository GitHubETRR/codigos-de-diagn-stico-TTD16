#include <iostream>
#include <cstring>
using namespace std;
#define MAX_CHAR 50

class Coche{
    private:
        int precio, años_de_antiguedad;
        char marca[MAX_CHAR], nombre[MAX_CHAR];
    
    public:
        
        void guardar_datos(int p, int a, const char* m, const char* n){
            p = precio;
            a = años_de_antiguedad;
            strcpy(m, marca);
            strcpy(n, nombre);
        }
        
        void leer_datos(int &p, int &a, char* m, char* n){
            precio = p;
            años_de_antiguedad = a;
            strcpy(marca, m);
            strcpy(nombre, n);
        }
        
        void marcas_disponibles(){
            cout << "---MARCAS DISPONIBLES---" << endl;
            cout << "1- Mazda" << endl;
            cout << "2- Peugeot" << endl;
            cout << "3- Ford" << endl;
            cout << "4- Volvo" << endl;
            cout << "5- Hyundai" << endl;
        }
        
        void autos_disponibles(int &e){
            switch(e){
                case 1: "--AUTOS DISPONIBLES---"
            }
        }
}
