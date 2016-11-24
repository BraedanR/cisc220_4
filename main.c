#Luisa Aimoli 10169687

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "mystring.h"

int main () {
	char what[5] = "C Programming";
	char isit[4] = "Laguage";
	char stri[10];

char* s = safestrcat(what, isit);
printf("safestrcat(what, isit) returns: %s\n", s);

int s2 = substring(s, 2, 3, stri);
printf("substring(s, 2, 3, stri) returns: %d\n", s2);

free(s)

return 0;

