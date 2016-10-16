#include <stdio.h>

/* Il programma esegue la somma tra due numeri 
 * tramite una funzione ricorsiva.
 *
 * Nota: b deve essere positivo */

int somma(int a, int b);

int main()
{
  int a, b = -1;

  printf("Inserisci il primo numero: ");
  scanf("%d", &a);

  do {
    printf("Inserisci il secondo numero: ");
    scanf("%d", &b);
  } while (b < 0);

  printf("La somma e' %d\n", somma(a, b));

  return 0;
}


int somma (int a, int b)
{
  /* il caso base e' OK */
  if (b == 0)
    return a;

  /* se b non e' zero bisogna ridurre il problema
   * della somma di a e b a qualcosa di piu' semplice
   */
  return ... somma(...) ...;
}
