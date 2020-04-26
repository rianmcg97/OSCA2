#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
  char hex[BUFSIZ];
  //char alpha[2] = "ff";
  while(fgets(hex, sizeof hex, stdin))
  {
  if(sizeof stdin == 6)
  {
   //char *hexAlpha = malloc(strlen(hex) + strlen(alpha) + 1);
   //strcpy(hexAlpha, hex);
   //strcat(hexAlpha, alpha);
   char hexAlpha[] = hex "ff";
   printf ("%s,", hexAlpha);
  }
  }
return 0;


}
