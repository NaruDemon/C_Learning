#include <stdio.h>

/*
Proyectos:
* Hacer ejercicios (bajar a 70kg)
* Aprender a Dibujar (kemonos)
* Volver al Steaming

* Fuente ATX con salidas 3.3V, 5V y 12V
* Adaptar tablet a USB - C
* Hacer cosas con el ESP-32 y el Arduino

* Home Server LAB (proyecto a largo plazo)
* Reiniciar mis conocimientos en programacion
* * Iniciar en C
* * Backend en Ruby
* * Frontend en HTML y CSS (sin experiencia previa)
*/


#define PROJECTS_TOTAL 11

int PROJECTS_STATES[PROJECTS_TOTAL] = { 0 };

void progress_question();

int main(){
    progress_question();
    return 0;
}

void progress_question(){
    int rescued_projects = 0;

    for(int i = 0; i < PROJECTS_TOTAL; i++){
        while(1){
            printf("Estado del Projecto #%d: ", i);
            scanf("%d", &PROJECTS_STATES[i]);

            if(PROJECTS_STATES[i] != 0 && PROJECTS_STATES[i] != 1){
                printf("ESTADO SOLO ENTRE 0 y 1\n");
            }
            else{
                break;
            }
        }

        if (PROJECTS_STATES[i] == 1){
            rescued_projects++;
        }
    }

    int abandoned_projects = PROJECTS_TOTAL - rescued_projects;

    printf("Te quedan %d proyectos en el lodo.\n", abandoned_projects);
}
