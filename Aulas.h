#include <iostream>
#include <string>

using namespace std;

class Aula{
    private:
        int Edificio;
        int Piso;
        string Grupo;

    public:
        Aula();
        Aula(int ed,int pi, string gr){//Constructor
            Edificio = ed;
            Piso = pi;
            Grupo = gr;
        }

        //Setter
        void setEdificio(int edificio){
            Edificio = edificio;
        }

        void setPiso(int piso){
            Piso = piso;
        }

        void setGrupo(string grupo){
            Grupo = grupo;
        }

        //Getter        
        int getEdificio(){
            return Edificio;
        }

        int getPiso(){
            return Piso;
        }

        string getGrupo(){
            return Grupo;
        }
};
