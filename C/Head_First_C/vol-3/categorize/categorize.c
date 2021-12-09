/** Version ! of the code

#include<stdio.h>

int main()
{
  char line[80];
  FILE *in = fopen("spooky.csv", 'r');
  FILE *file1 = fopen("ufos.csv", 'w');
  FILE *file2 = fopen("disappearances.csv", 'w');
  FILE *file3 = fopen("others.csv", 'w');

  while(fscanf(in, "%79[^\n]\n", line) == 1)
  {
    if (strstr(line, "UFO"))
      fprintf(file1, "%s\n", line);
    else if (strstr(line, "Disappearances"))
      fprintf(file2, "%s\n",line );
    else
    fprintf(file3, "%s\n",line );
  }

  fclose(file1);
  fclose(file2);
  fclose(file3);

  return 0;
}

**/

/** CODE VERSION 2 **/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
  char line[80];
  if(argc != 6){
    fprintf(stderr, "You need to give 5 arguments\n" );
  }
  FILE *in = fopen("spooky.csv", 'r');
  FILE *file1 = fopen("argv[2]", 'w');
  FILE *file2 = fopen("argv[4]", 'w');
  FILE *file3 = fopen("argv[5]", 'w');

  while (fscanf(in,"%79[^\n]\n",line) == 1)
  {
    if (strstr(line,"argv[1]"))
      fprintf(argv[2], "%s\n",line );
    else if (strstr(line,"argv[2]"))
      fprintf(argv[4], "%s\n",line );
    else
      fprintf(argv[5], "%s\n",line );
  }
  fclose(file1);
  fclose(file2);
  fclose(file3);

  return 0;

  }
