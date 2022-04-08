#include <stdio.h>
#include <string.h>
#include <iostream>

void concatenarstring(char string1[], int t1, char string2[], int t2, char string3[]) {
	int i, j;

	for (i = 0; i < t1; i++) {
		string3[i] = string1[i];

	}
	for (j = 0; j < t2; j++) {

		string3[t1 + j] = string2[j];

	}



}

int main(void) {
	char palavra1[] = { 'i', 's', 'a', 'b', 'e','l' ,'l' ,'a' };
	char palavra2[] = { 'G', 'o', 's', 't', 'o','s' ,'a' };
	char novapalavra[15];

	concatenarstring(palavra1, 8, palavra2, 7, novapalavra);

	int i;
	for (i = 0; i < 15; i++);
	printf("%c", novapalavra[i]);




}