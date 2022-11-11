#include <iostream>
#include <string>
#include "Alumnos.h"
#include "Maestros.h"
#include "Aulas.h"
#include "Horarios.h"

using namespace std;

int main(){
    Alumno alumno_1("adsdasd","Juan",23,8.7,3);
    Maestro maestro_1("Pedro","DS3334");
    Aula aula_1(4,2,"sdfqwerewrwer");
    cout<< alumno_1.getGrado()<< endl;
    cout<< maestro_1.getGrupo()<< endl;
    cout<< aula_1.getPiso();
    return 0;
} 