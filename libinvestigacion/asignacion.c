#include "asignacion.h"
#include <string.h>

void asignarCursosASalas(Curso cursos[], Sala salas[]) {
    for (int i = 0; i < NUM_CURSOS; i++) {
        for (int j = 0; j < NUM_SALAS; j++) {
            if (cursos[i].num_estudiantes <= salas[j].capacidad) {
                Horario horario_curso = cursos[i].horario_curso;
                Horario horario_sala = salas[j].horario_asignado;
                if ((horario_curso.inicio >= horario_sala.fin || horario_curso.fin <= horario_sala.inicio) && salas[j].horario_asignado.inicio == 0) {
                    cursos[i].asignada = 1;
                    strcpy(cursos[i].asignada_sala, salas[j].nombre);
                    salas[j].horario_asignado = cursos[i].horario_curso;
                    break;
                }
            }
        }
    }
}
