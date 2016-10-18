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

  cifre(num);

  return 0;
}

int cifre(int num) 
{
  if (num == 0) {
    printf("\n");
    return 0;
  }
  else { 
    printf("%d", num % 10);
    num /= 10;
    cifre(num);
  }
}

