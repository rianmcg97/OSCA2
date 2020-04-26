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
  //printf("%ld \n", decVal);
  int r, g, b;
  if( 3 == scanf( "#%02x%02x%02x", &r, &g, &b ) )
   {
   	 printf("%ld \n", decVal);
     printf( "Red   : %3d (%02x)\n", r, r );
     printf( "Green : %3d (%02x)\n", g, g );
     printf( "Blue  : %3d (%02x)\n", b, b );
   }
 }
 return 0;
}

