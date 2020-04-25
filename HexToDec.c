#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char hex[BUFSIZ];
  char *remaining;
  long decVal;
  while(fgets(hex, sizeof hex, stdin) != NULL)
  {
  decVal = strtol(hex, &remaining, 16);
  printf("%ld \n", decVal);
  }
  return 0;
}
