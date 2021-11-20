/*
Bermuda is a small C tool to filter out the output of bermuda rectangle and
give it as an input for geo2jason tool
*/

#include <stdio.h>

int main()
{
  float latitude, longitude;
  char info[80];
  while (scanf("%f,%f,%79[^\n]",latitude, longitude, info ) == 3) {
      if ((latitude > 26) && (latitude < 34))
        if((longitude > -76) && (longitude < -64))
          printf("%f,%f,%s\n",latitude, longitude, info );
  }
  return 0;

}
