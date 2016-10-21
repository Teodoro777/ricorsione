/* somma.c */

/* somma due interi mediante
 * una funzione ricorsiva,
 * usa ricorsione in coda
 */

#include <stdio.h>

int somma(int x, int y);
int somma_helper(int y, int partial_sum);

int main()
{
  int a, b;

  printf("Effettua la somma tra due numeri non negativi\n\n");

  do {
    printf("Inserisci il primo numero: ");
    scanf("%d", &a);
  } while (a<0);

  do {
    printf("Inserisci il secondo numero: ");
    scanf("%d", &b);
  } while (b<0);

  printf("La somma di %d e %d e' pari a %d\n", a, b, somma(a, b));

  return 0;
}

int somma(int x, int y)
{
  if (x==0) return y;

  return somma(x-1, y+1);
}

/*
int somma(int x, int y)
{
  return somma_helper(y, x);
}

int somma_helper(int y, int partial_sum)
{
  if (y==0) return partial_sum;

  return somma_helper(y-1, partial_sum+1);
}
*/
