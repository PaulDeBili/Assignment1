// Joseph Bisch
// Intermediate C
// Program 0

#include <stdio.h>
#include <stddef.h>

int main() {
	const char* data[4] = {
		"Joseph Bisch",
		"jbisc1@unh.newhaven.edu",
		"Laptop running Debian",
		"No IDE (vim as text editor, plus GCC as compiler)"
	};
	size_t i;
	for (i =0; i < sizeof(data) / sizeof(data[0]); i++) {
		printf(data[i]);
		printf("\n");
	}
	return 0;
}

/*
 * joseph@debian:~/code/newhaven/cprog2/p0$ gcc -o p0 p0.c
 * joseph@debian:~/code/newhaven/cprog2/p0$ ./p0
 * Joseph Bisch
 * jbisc1@unh.newhaven.edu
 * Laptop running Debian
 * No IDE (vim as text editor, plus GCC as compiler)
 */
