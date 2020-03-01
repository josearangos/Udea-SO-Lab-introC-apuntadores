#include<stdio.h>
#define MAX 7
 
void main()
{
	int numeros[MAX]={6,1,5,2,3,4,0};
	int cont,pasos,temp,i;
 
	for(cont=MAX/2;cont!=0;cont/=2){
		for(pasos=1;pasos!=0;)
		{
			pasos=0;
			for(i=cont;i<MAX;i++)
				if(numeros[i-cont]>numeros[i])
				{
					temp=numeros[i];
					numeros[i]=numeros[i-cont];
					numeros[i-cont]=temp;
					pasos++;
				}
		}
    }
    if(MAX%2!=0) {
        printf("\nEL valor de la mediana es : %d",numeros[MAX/2]);
    } else {
        printf("\nEL valor 1 de la mediana es : %d",numeros[MAX/2]);
        printf("\nEL valor 2 de la mediana es : %d",numeros[(MAX/2)-1]);
    }
}

