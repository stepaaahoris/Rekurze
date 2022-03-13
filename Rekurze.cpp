#include <stdio.h>


long faktorial(int x) {
	if (x <= 1) {
		return 1;
	}
	else {
		return x * faktorial(x - 1);
	}
}

long bunky(int x) {
	if (x <= 1) {
		return 1;
	}
	else {
		return 2 * bunky(x - 1);
	}
}
long fibonacci(int x) {
	if (x < 2) {
		return x;
	}
	else {
		return fibonacci(x - 1) + fibonacci(x - 2);
	}
}

float urok(int x) {
	if (x <= 1) return x * 1.01;
	else return urok(x - 1) * 1.01;
}

int main()
{
	printf("Bunky: ");
	printf("%d\n", bunky(8));
	printf("Factorial: ");
	printf("%d\n", faktorial(3));
	printf("Fibonacci: ");
	printf("%d\n", fibonacci(2));
	printf("Urok: ");
	printf("%f\n", urok(4));
}
