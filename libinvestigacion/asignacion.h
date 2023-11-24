#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_SALAS 6
#define NUM_CURSOS 6

typedef struct Horario {
    int inicio;
    int fin;
} Horario;

typedef struct Sala {
    char nombre[20];
    char bloque[10];
    int capacidad;
    char tipo_aula[40];
    Horario horario_asignado;
} Sala;

typedef struct Curso {
    char nombre[20];
    int num_estudiantes;
    char profesor[30];
    int asignada;
    char asignada_sala[20];
    Horario horario_curso;
} Curso;

void asignarCursosASalas(Curso cursos[], Sala salas[]);