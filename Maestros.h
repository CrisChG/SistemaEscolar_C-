#include <iostream>
#include <string>

using namespace std;

class Maestro{
    private:
        string Nombre;
        string Grupo;


    public:
        Maestro();
        Maestro(string nom,string gr){//Constructor
            Nombre = nom;
            Grupo = gr;
        }

        //Setter
        void setNombre(string nombre){
            Nombre = nombre;
        }

        void setGrupo(string grupo){
            Grupo = grupo;
        }

        //Getter        
        string getNombre(){
            return Nombre;
        }

        string getGrupo(){
            return Grupo;
        }
};
