/*
 Si se ingresa un número natural presentar por pantalla el desarrollo del factorial de
dicho número, como así también el valor del factorial.
Ejemplo: 8! = 8 * 7 * 6 * 5 * 4 * 3 * 2 * 1
*/
#include <stdio.h>
int factorial(int A);
int main()
{
  int A;
  printf("ingresa un numero natural:");
  scanf("%d", &A);
  int B = factorial(A);
}
int factorial(int A)
{
  int result = 1;
  for (int i = 1; i <= A; i++)
  {
    result = i * result;
    printf("%d", i);
    if (i < A)
    {
      printf("*");
    }
  }
  printf("=");
  printf("%d", result);
}