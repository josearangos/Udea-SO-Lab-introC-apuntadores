#include <stdio.h>

void test(void);
int contarCaracter(char *array, char ch);



int main() {
  test();
  
  return 0;
}
  

int contarCaracter(char *array, char ch) {
    int cantidad = 0;

    while(*array != '\0'){
        char valor = *array;
        if(valor == ch){
          cantidad ++;
        }        
        array++;
    }
    
    if(cantidad == 0){
        cantidad = -1;
    }
    return cantidad;
}


void test(void) {
  char cad[] = "cadenacadenacadenacadena";
  char *pCad= cad;
  char search= '0';
  
  int cantidad  = contarCaracter(pCad,search);
  printf("%d", cantidad);


}