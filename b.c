#include <stdio.h>

void g() {
	printf("Hi");
	f();
}

int main(void) {
	g();
	return 0;
}
