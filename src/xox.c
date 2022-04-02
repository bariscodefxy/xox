#include <stdio.h>
#include "common/util.h"
#define EMPTY_CHARACTER "N"

/*
===============
main
===============
*/
int main(){
	char *gamestate[3][3] = {{EMPTY_CHARACTER, EMPTY_CHARACTER, EMPTY_CHARACTER}, {EMPTY_CHARACTER, EMPTY_CHARACTER, EMPTY_CHARACTER}, {EMPTY_CHARACTER, EMPTY_CHARACTER, EMPTY_CHARACTER}};
	printGameMotd();

	return 0;
}
