/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class name here>
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			stopwatch.cpp
 * Author(s):		Peter Bauer
 * Due Date:		#due#
 *-----------------------------------------------------------------------------
 * Description:
 * <your description here>
 *-----------------------------------------------------------------------------
*/
#include "stopwatch.h"
#include <time.h>

clock_t startsw, endsw;

void 	start_stopwatch (){
startsw=clock();
endsw=0;
}

void 	stop_stopwatch (){
endsw=clock();
}

float 	elapsed_time (){
  if (endsw==0) {
    stop_stopwatch();
  }
  return float(endsw-startsw)/CLOCKS_PER_SEC;
}
