#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c;
    printf("Immetti A: ") ;
scanf("%f", &a) ;
printf("Immetti B: ") ;
scanf("%f", &b) ;
printf("Immetti C: ") ;
scanf("%f", &c) ;
printf("Verifico le proprieta del triangolo: %f, %f, %f\n", a, b, c) ;

if( a==b && b==c )
printf("Il triangolo e’ equilatero\n");
else
 printf("Il triangolo non e’ equilatero\n");
if( a==b || b==c || a==c )
printf("Il triangolo e’ isoscele\n") ;
 else
printf("Il triangolo non e’ isoscele\n");
if( a!=b && b!=c && a!=c )
 printf("Il triangolo e’ scaleno\n") ;
else
printf("Il triangolo non e’ scaleno\n") ;
if( a*a == b*b + c*c )
printf("Il triangolo e’ rettangolo (ipotenusa A)\n") ;
else
printf("Il triangolo non e’ rettangolo (ipotenusa A)\n") ;

if ( b*b == a*a + c*c )
printf("Il triangolo e’ rettangolo (ipotenusa B)\n") ;
else
printf("Il triangolo non e’ rettangolo (ipotenusa B)\n") ;
  if( c*c == b*b + a*a )
    if ( ( a*a == b*b + c*c ) ||
       ( b*b == a*a + c*c ) ||
       ( c*c == b*b + a*a ) )
printf("Il triangolo e’ rettangolo\n") ;
else
printf("Il triangolo non e’ rettangolo\n") ;

exit;

}
