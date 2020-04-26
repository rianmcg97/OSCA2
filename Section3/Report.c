#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
  char *log;
  log = malloc(BUFSIZ);
  printf("Log\t\tLog2\t\tLog3\n");
  while(fgets(log, BUFSIZ, stdin) != NULL);
  {
  printf("-----------------------------------\n");
  printf("%s", log);
  }
  return 0;

}
