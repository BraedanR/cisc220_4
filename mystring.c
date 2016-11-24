#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "mystring.h"

char* safestrcat( char *a, char *b) {
	int alen = strlen(a);
	int blen = strlen(b);
	char *new = malloc(alen+blen+1); //1 for the /0 character
	strcpy(new, a);
	strcat(new, b);
	return new;
}

int substring(char *source, int from, int n, char *target) {
	char *temp;
	strcpy(temp, target);
	int count = 0;
	int length = strlen(source);

	for (i=0; i < length; ++i) {
		if (i >= from) {
			if (count <= n) {		
				strcat(target, source[i]);
			}
		}
		++count;
	}

	if (strcmp(temp, target) == 0) { //subtring string is still the same as before
		return -1; //failure 
	}
	return 0; //success
}
