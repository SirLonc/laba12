#include <stdio.h>
#include "Time.h"

int main() {
	char l[3] = { 13,27,15 };
	char* m;
	m = l;
	Time a;
	printf("Time without inputs - ");
	a.get();
	Time b(23);
	printf("Time with one input - ");
	b.get();
	Time c(23, 59);
	printf("Time with two inputs - ");
	c.get();
	Time d(23, 59, 59);
	printf("Time with three inputs - ");
	d.get();
	printf("Time with array pointer input - ");
	Time g(m);
	g.get();
	a.set(23, 23, 23);
	printf("Time with changed inputs - ");
	a.get();

}