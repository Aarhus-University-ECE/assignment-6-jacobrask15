#include <stdio.h>
#include <assert.h>

int max(int* numbers, int size)
{
assert(size>0);

int maxvalue = numbers[0]; /* Variable to store max value set to first place in array */

   /* for loop to search through array to find max value */
   for (int i = 1; i < size; i++) {
        if (numbers[i] > maxvalue)
            maxvalue = numbers[i];
   }

    return maxvalue;
}
