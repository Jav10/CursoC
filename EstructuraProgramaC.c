//librerías
#include <stdio.h>  
//constantes
#define PI 3.141516 
//variables globales
float area, radio; 
// definición de funciones
float AreaCirculo(float x, float y); 
//***Estructuras
//función principal main(int argc, char* argv[])
void main(void){  
  radio=5.0;
  area= AreaCirculo(radio, PI);
  printf("%f", area);
}
//funciones
float AreaCirculo(float x, float y){
  return (x*x*y);
}
