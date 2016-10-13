/* fattoriale.c */

/* Calcola il fattoriale di un numero
 * attraverso una funzione ricorsiva
 */

/* Una funzione si dice ricorsiva se richiama se stessa
 * nella sua stessa definizione
 */

#include <stdio.h>

/* calcola ricorsivamente il fattoriale di n
 */
int fattoriale(int n);

int main()
{
  int num;

  do {
    printf("Inserisci un numero non negativo: ");
    scanf("%d", &num);
  } while (num<0);

  printf("%d! = %d\n", num, fattoriale(num));

  return 0;
}

/* fattoriale(n):
 * calcola il fattoriale di n dalla definizione ricorsiva
 * n! = n * (n-1)!
 */
int fattoriale(int n)
{
  /* caso base */
  if (n==0) return 1;

  /* caso generico, si avvicina
   * di un passo al caso base
   */
  return n * fattoriale(n-1);
}
