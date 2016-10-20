/* Il programma risolve il problema della torre
 * di Hanoi mediante una funzione ricorsiva */

#include <stdio.h>

void hanoi(int num_dischi, int paletto_iniziale, int paletto_destinazione, int paletto_temporaneo);

int main()
{
  hanoi(3, 1, 2, 3);

  return 0;
}

void hanoi(int num_dischi, int paletto_iniziale, int paletto_destinazione, int paletto_temporaneo)
{
  if (num_dischi == 1) 
    printf("%d -> %d\n", paletto_iniziale, paletto_destinazione);
  else {
   hanoi(num_dischi - 1, paletto_iniziale, paletto_destinazione, paletto_temporaneo);
   printf("%d -> %d\n", paletto_iniziale, paletto_temporaneo);
   hanoi(num_dischi - 1, paletto_destinazione, paletto_temporaneo, paletto_iniziale);
  }
}
