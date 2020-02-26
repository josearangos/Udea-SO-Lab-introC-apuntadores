#include <stdio.h>

void test(void);
int contarCaracter(char *array, char ch);



int main() {
  //test();
  char cad[] = "cadena";
  char *pCad= cad;
  char search= 'b';
  
   contarCaracter(pCad,search);

  
}
  

int contarCaracter(char *array, char ch) {
    int cantidad = -1;

    while(*array != '\0'){
        char valor = *array;
        printf("%c \n",valor);
        array++;
    }
    return cantidad;
}


int reemplazarCaracter(char *array, char ch) {
  int cnt = 0;
  while (*array != '\0') {
    if(ch == *array) {
      *array = '-';  
    }
    else if (*array != '-') {
      cnt++;
    }
    array++;
  }
  return cnt;
}




void test(void) {
  char cad[] = "cadena";
  int v = reemplazarCaracter(cad,'a');
  printf("%s : %d\n", cad, v);
  v = reemplazarCaracter(cad,'n');
  printf("%s : %d\n", cad, v);
}