/* Il programma risolve l'equazione b^e prendendo
 * in input due numeri interi positivi. Farà l'operazione
 * tramite una funzione ricorsiva */

#include <stdio.h>

int pot(int b, int e);

int main()
{
  int b, e;

  do {
    printf("Inserisci la base: ");
    scanf("%d", &b);
  } while (b <= 0);

  do { 
    printf("Inserisci l'esponente: ");
    scanf("%d", &e);
  } while (e <= 0);

  printf("%d^%d = %d\n", b, e, pot(b, e));

  return 0;
}

int pot(int b, int e)
{
  if (e == 1) 
    return b;
  else {
    return b * pot(b, e-1);
  }
}










