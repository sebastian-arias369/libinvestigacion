#include <stdio.h>
#include "asignacion.h"

int main() {
    Sala salas[NUM_SALAS];


    strcpy(salas[0].nombre, "SALA 1");
    strcpy(salas[0].bloque, "BLOQUE A");
    salas[0].capacidad = 15;
    strcpy(salas[0].tipo_aula, "SALA DE INFORMATICA");
    salas[0].horario_asignado.inicio = 800;
    salas[0].horario_asignado.fin = 1000;

    strcpy(salas[1].nombre, "SALA 2");
    strcpy(salas[1].bloque, "BLOQUE B");
    salas[1].capacidad = 20;
    strcpy(salas[1].tipo_aula, "SALA DE INFORMATICA");
    salas[1].horario_asignado.inicio = 1000;
    salas[1].horario_asignado.fin = 1200;


    strcpy(salas[2].nombre, "SALA 3");
    strcpy(salas[2].bloque, "BLOQUE C");
    salas[2].capacidad = 25;
    strcpy(salas[2].tipo_aula, "SALA DE INFORMATICA");
    salas[2].horario_asignado.inicio = 1200;
    salas[2].horario_asignado.fin = 1300;

    strcpy(salas[3].nombre, "SALA 4");
    strcpy(salas[3].bloque, "BLOQUE D");
    salas[3].capacidad = 25;
    strcpy(salas[2].tipo_aula, "SALA DE INFORMATICA");
    salas[3].horario_asignado.inicio = 1300;
    salas[3].horario_asignado.fin = 1400;

    strcpy(salas[4].nombre, "SALA 5");
    strcpy(salas[4].bloque, "BLOQUE E");
    salas[4].capacidad = 25;
    strcpy(salas[4].tipo_aula, "SALA DE INFORMATICA");
    salas[4].horario_asignado.inicio = 1400;
    salas[4].horario_asignado.fin = 1500;

    strcpy(salas[5].nombre, "SALA 6");
    strcpy(salas[5].bloque, "BLOQUE F");
    salas[5].capacidad = 25;
    strcpy(salas[5].tipo_aula, "SALA DE INFORMATICA");
    salas[5].horario_asignado.inicio = 1500;
    salas[5].horario_asignado.fin = 1600;


    for (int i = 0; i < NUM_SALAS; i++) {
        salas[i].horario_asignado.inicio = 0;
        salas[i].horario_asignado.fin = 0;
    }