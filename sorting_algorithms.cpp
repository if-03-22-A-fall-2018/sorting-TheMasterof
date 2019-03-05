/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class name here>
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			sorting_algorithms.cpp
 * Author(s):		<your name>
 * Due Date:		#due#
 *-----------------------------------------------------------------------------
 * Description:
 * <your description here>
 *-----------------------------------------------------------------------------
*/
#include "sorting_algorithms.h"
#include <stdlib.h>

void 	init_random (int *array, unsigned long length){
  for (int i = 0; i < length; i++) {
   array[i] = rand()%10;
 }
}

void 	bubble_sort (int *array, unsigned long length){
    int temp;

    for (unsigned long i = 0 ; i < length - 1; i++)
    {
      for (unsigned long u = 0 ; u < length - i - 1; u++)
      {
        if (array[u] > array[u+1])
        {

          /* Swapping */
          temp = array[u];
          array[u] = array[u+1];
          array[u+1] = temp;
        }
      }
    }
 }

void 	insertion_sort (int *array, unsigned long length){
  int temp;
  int j;
     for (unsigned long i = 1; i < length; i++)
     {
         temp = array[i];
         j = i-1;

         while (j >= 0 && array[j] > temp)
         {
             array[j+1] = array[j];
             j = j-1;
         }
         array[j+1] = temp;
     }
}
