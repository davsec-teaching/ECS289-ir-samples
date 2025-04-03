#include <stdio.h>

int main(int argc, char** argv) {
	int a = atoi(argv[0]);
	int b = atoi(argv[1]);
	int c;
	if (a > b) {
		c = a;
	} else if (a < b) {
		c = b;
	} else {
		c = 100;
	}
	return c;
}

