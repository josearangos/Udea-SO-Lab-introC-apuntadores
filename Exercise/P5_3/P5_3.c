#include <stdio.h>
#include <string.h>


void test(void);

char *obtenerSubcadena(char *array, int index);

int main() {
  test();
  
  return 0;
}
  

/**
 *   @brief  Obtiene una subcadena a tomada a partir de un subindice asociado a una subcadena
 *
 *   @param  array cadena de caracteres a ingresar
 *   @param  index indice
 *   @return un apuntador a la posicion inicial de la subcadena o NULL si el tamaño de index supera a la longitud de la cadena
 */
char *obtenerSubcadena(char *array, int index) {

    int conta =0;

    if(index > strlen(array)){
        return NULL;       
    }

    while(conta < index){
        array ++;
        conta ++;
    }


    return array;
}

void test(void) {
    char *p1 = "Hola que tal";
    char *p2;
    p2 = obtenerSubcadena(p1, 5);
    printf("%s\n",p1);    // Imprime: Hola que tal
    printf("%s\n",p2);    // Imprime: que tal

}