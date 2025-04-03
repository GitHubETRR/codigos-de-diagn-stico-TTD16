//Multiplicacion con numeros positivos
#include <stdio.h>

void bienvenida();
void proceso_resultado();

int main ()
{
  bienvenida();
  proceso_resultado();
}
void bienvenida(){
  printf("\033[0;36mBienvenido al programa en el que ingresas 10 numeros positivos y los multiplica\033[0m\n");
  printf("\033[0;36mPara comenzar, ingrese 10 numeros:\033[0m\n");   
}
void proceso(){
    double num, m = 1;
    for (int i = 1; i <= 10; ++i) {
      printf ("\033[0;37mIngrese el numero%d:\033[0m ", i);
      scanf ("%lf", &num);
      
    if (num < 0.0)
	{
	  printf("\033[0;36mIngreso un numero negativo, multiplicaremos los numeros positivos mas recientes:\033[0m\n");
	  break;
	}
      m *= num;
  }
    printf ("\033[0;37mMultiplicación = %lf\033[0m", m);
}
