/* Il programma accetta un numero che poi
 * stamperà con le cifre al contrario mediante
 * una funzione ricorsiva */

#include <stdio.h>

int cifre(int num);

int main()
{
  int num;

  printf("Inserisci un numero: ");
  scanf("%d", &num);

  printf("%d\n", cifre(num));

  return 0;
}

int cifre(int num) 
{
  if (num == 0) 
    return 0;
}

