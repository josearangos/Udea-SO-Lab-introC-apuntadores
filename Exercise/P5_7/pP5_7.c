#include <stdio.h>
#define MAX 5

void test(void);
void vector_print(float vector[], int size);


int main() {
  test();
  return 0;
}
  


void test(void) {
int ROWS=2;

//Cada fila represanta un estudiante
float notas[2][5]={
    {3.5,2,5,4,3.7},
    { 1,2,3,4,5}
};


float suma = 0;
float media = 0;
float suma_materia = 0;
float media_materia = 0;

//Media por alumno 
float mediasByAlumno[ROWS];

for (int i = 0; i< ROWS; i++){
    suma = 0;
    media = 0;
    for (int j = 0; j < MAX; j++){
        suma = suma + notas[i][j];       
    }
    media = suma/MAX;
    mediasByAlumno[i]=media;
}

//Media por materia 
float mediasByMateria[MAX];
for (int i = 0; i< MAX; i++){
    suma_materia = 0;
    media_materia = 0;
    for (int j = 0; j < ROWS; j++){
        suma_materia = suma_materia +  notas[j][i];       
    }
    media_materia = suma_materia/ROWS;
    mediasByMateria[i]=media_materia;
}

float mediaClase = 0;
float sumaMediaClase = 0;

//Media total de la clase
for(int i = 0; i<ROWS;i++){
    sumaMediaClase = sumaMediaClase + mediasByAlumno[i];
}
mediaClase = sumaMediaClase/ROWS;

//Imprimir media de cada alumno
printf("Media de cada alumno: ");
vector_print(mediasByAlumno, ROWS);
printf("\n");
//Imprimir media de cada asignatura

printf("Media de cada asignatura: ");
vector_print(mediasByMateria, MAX);
printf("\n");
//Imprimir media total de la clase
printf("Media total de la clase: %f ", mediaClase);
printf("\n");
//Ordenar alumnos por notas medias individuales
int cont,pasos,temp,i;

for(cont=ROWS/2;cont!=0;cont/=2){
    for(pasos=1;pasos!=0;)
    {
        pasos=0;
        for(i=cont;i<ROWS;i++)
            if(mediasByAlumno[i-cont]>mediasByAlumno[i])
            {
                temp=mediasByAlumno[i];
                mediasByAlumno[i]=mediasByAlumno[i-cont];
                mediasByAlumno[i-cont]=temp;
                pasos++;
            }
    }
}

printf("Notas medias individuales ordenadas: ");
vector_print(mediasByAlumno, ROWS);
printf("\n");


}

void vector_print(float vector[], int size){
 for (int j = 0; j < size; j++){
            float v = vector[j];
            printf("%f, ",v);   
    }


}

