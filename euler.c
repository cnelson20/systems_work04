#include "euler.h"

int problem1() {
	int sum = 0;
	int i;
	for (i = 1; i < 1000; i++) {
		if (!(i % 5 && i % 3)) {
			sum += i;
		}
	}
	return sum;
}
int problem5() {
	int a,b;
	a = 20;
	b = 10;
	do {
		if (a % b) {
			a += 20;
			b = 10;
		} else {
			b++;	
		}
	} while (b <= 20);
	
	return a;
}
int problem6() {
	int sqsum = 0;
	int sumsq = 0;
	int i;
	
	for (i = 1; i <= 100; i++) {
		sumsq += i * i;
		sqsum += i;
	}
	
	return sqsum * sqsum - sumsq;
}
