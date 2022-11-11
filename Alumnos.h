#include <iostream>
#include <string>

using namespace std;

class Alumno{
    private:
        string Matricula;
        string Nombre;
        int Edad;
        float Promedio;
        int Grado;

    public:
        Alumno();
        Alumno(string mat, string nom, int ed, float prom, int gr){//Constructor
            Matricula = mat;
            Nombre = nom;
            Edad = ed;
            Promedio = prom;
            Grado = gr;
        }

        //Setter
        void setMatricula(string matricula){
            Matricula = matricula;
        }

        void setNombre(string nombre){
            Nombre = nombre;
        }

        void setEdad(int edad){
            Edad = edad;
        }

        void setPromedio(float promedio){
            Promedio = promedio;
        }

        void setGrado(int grado){
            Grado = grado;
        }

        //Getter
        string getMatricula(){
            return Matricula;
        }
        
        string getNombre(){
            return Nombre;
        }

        int getEdad(){
            return Edad;
        }

        float getPromedio(){
            return Promedio;
        }

        int getGrado(){
            return Grado;
        }
};
