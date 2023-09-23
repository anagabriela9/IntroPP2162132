
// C Program to find the sum of
// even-indices Fibonacci numbers
#include <stdio.h>
#include <math.h>

double numA = (1.0+sqrt(5.0))/2.0;

double fibonacci(long numero){
return (pow(numA,numero)-pow(1-numA,numero))/sqrt(5.0);
}

int main(){
long numero;
printf("Ingresar un numero: ");
scanf("%ld",&numero);
printf("El numero %ld de la sucesion de Fibonacci es %.0f\n",numero,fibonacci(numero));
return 0;
}
