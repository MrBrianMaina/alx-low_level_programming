#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

/**
 * main - This is the main program
 *
 * return - this program returns zero
 */
int main(void)
{
int naina;

srand(time(0));
naina = rand() - RAND_MAX / 2;
 if (naina > 0)
   {
    printf("%d is positive\n", naina);
  }
 else if (naina == 0)
   {
     printf("%d is zero\n", naina);
   }
 else
   {
     printf("%d is negative\n", naina);
   }
return (0);
}
