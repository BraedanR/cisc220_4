#Luisa Aimoli 10169687

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "mystring.h"

int main () {
	char course[5] = "CISC";
	char number[4] = "220";
	char stri[10];

char* s = safestrcat(course, number);
printf("safestrcat(course, number) returns: %s\n", s);

int s2 = substring(s, 2, 3, stri);
printf("substring(s, 2, 3, stri) returns: %d\n", s2);

free(s)

return 0;

