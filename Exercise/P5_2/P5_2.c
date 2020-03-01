#include <stdio.h>

void test(void);
int reemplazarCaracter(char *, char);

int main() {
  test();
  return 0;
}

int obtenerIndice(char *array, char ch) {
  int cnt = 0;
  while (*array != '\0') {
    if(ch == *array) {
      return cnt;  
    }
    else {
      array++;
      cnt++;
    }
  }
  return -1;
}

void test(void) {
  char cad[] = "cadena";
  int v = obtenerIndice(cad,'z');
  printf("%s : %d\n", cad, v);
}