#include <stdio.h>

/* Il programma esegue la somma tra due numeri 
 * tramite una funzione */

int somma(int a, int b);

int main()
{
  int a, b;

  printf("Inserisci il primo numero: ");
  scanf("%d", &a);

  printf("Inserisci il secondo numero: ");
  scanf("%d", &b);

  printf("La somma e' %d\n", somma(a, b));

  return 0;
}

int somma (int a, int b) {
  if (a == 0)
    return b;
  else if (b == 0)
    return a;
  else 
    return a + b;
}

