#include <stdio.h>
#include <ctype.h>
#include <string.h>

/*********************************************************/
/*            Declaraciones de las funciones             */
/*********************************************************/

/* Funciones de test */
void testVolverMayuscula(void);
void testEsLetra(void);
void testStringToMayuscula(void);

/* Funciones del programa */
int esLetra(char ch);
void volverMayuscula(char *ch);
void stringToMayuscula(char s[]);


/*********************************************************/
/*                     Funcion main                      */
/*********************************************************/


int main(void) {
  //testVolverMayuscula();
  //testEsLetra();
  testStringToMayuscula();
  return 0;
}

/*********************************************************/
/*             Definiciones de las funciones             */
/*********************************************************/

/* Funciones del programa */

/**  
 *   @brief  Determina si un caracter alfabetico
 *  
 *   @param  ch es el caracter a verificar
 *   @return 1 si el caracter es una letra del alfabeto y 0 si es otro simbolo.
 */
int esLetra(char ch) {
  if (isalpha(ch)) {
    return 1;
  } 
  else {
  return 0;
  }
  return 0;
}



/**  
 *   @brief  Convierte un caracter en mayuscula
 *  
 *   @param  ch es el caracter ingresado
 *   @return void
 */
void volverMayuscula(char *ch) {
	int i = 0;
    	if (*ch >= 'a' && *ch <= 'z') {
        	*ch = *ch - 32;
    	}
}


/**  
 *   @brief  Convierte en mayusculas la cadena de caracteres ingresada.
 *  
 *   @param  s es una cadena de caracteres ingresada y la cual despues del proceso en la función tendra los caracteres en mayuscula.
 *   @return void
 */

void stringToMayuscula(char s[]) {
      char *str = s;
      for (size_t i = 0; i < strlen(s); i++)
      {
         if (esLetra(*str)==1)
         {
          volverMayuscula(str);
          *str ++;
         }
         else
         {
            *str ++;
         }  

      }
  

}
/* Funciones de test */

/**  
 *   @brief  Funcion para testear volverMayuscula
 *  
 *   @param  void
 *   @return void
 */
void testVolverMayuscula(void) {
  char *p_char;
  char l1 = 'a', l2 = 'z';
  p_char = &l2;
  printf("Minusculas -> %c, %c\n", l1, l2);
  volverMayuscula(&l1);
  volverMayuscula(p_char);
  printf("Mayusculas -> %c, %c\n", l1, *p_char);
}

/**  
 *   @brief  Funcion para testear esLetra
 *  
 *   @param  void
 *   @return void
 */
void testEsLetra(void) {
  char c1 = '!', c2 = 's';
  printf("%c -> %d\n", c1, esLetra(c1));
  printf("%c -> %d\n", c2, esLetra(c2));
}

void testStringToMayuscula(void) {
  char s1[1000];
   int ch, n = 0;
   while ((ch = getchar()) != EOF && n < 1000) {
      s1[n] = ch;
      ++n;
   }   
  printf("\nEntrada > \n");
  printf("cadena 1: %s\n", s1);
  stringToMayuscula(s1); 
  printf("\n", s1);
 
}

/* Funciones del programa */

/* Codigo ya implementado en la fase 1...*/