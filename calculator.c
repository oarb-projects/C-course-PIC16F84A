#include <stdio.h>

int funciona(){
  return 1;
}

int main(void) {
  //variables
  int valor2;
  valor2=2;
  int valor=0;
  int n1,n2;
  //codigo inicial
  printf("Bienvenido al programa calculadora\n");
  printf("Seleccione 1 de las siguientes opciones:\n");
  printf("1.-suma\n2.-Resta\n3.-Multiplicacion\n4.-Division\n5.-Numeros del 1 al 5\n");
  scanf("%d", &valor2);
  printf("seleccionaste : %d\n",valor2);
  printf("Introduce valor 1: ");
  scanf("%d", &n1);
  printf("Introduce valor 2: ");
  scanf("%d", &n2);
  if(n2<0){
      printf("Fue numero negativo\n");
  }
  switch(valor2){
    case 1:
      printf("El resultado es: %d\n",(n1+n2));
      break;
    case 2:
      printf("El resultado es: %d\n",(n1-n2));  
      break;
    case 3:
      break;
    case 4:
      break;
    case 5:
      for(int i=1;i<6;i++){
        printf("%d",i);
      }
      printf("\n");
      break;
    default:
      printf("Opcion invalida");
  }
  printf("el resultado es %d",funciona());
  return 0;
}