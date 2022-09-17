# include <stdio.h>

int add(int x, int y) {
	return x + y;
}

int minus(int x, int y) {
	return x - y;
}

int multiply(int x, int y) {
	return x * y;
}

int divide(int x, int y) {
	return x / y;
}

int main(void) {
	int A = 10, B = 5;
	printf("%d", add(A, B));
	return 0;
}
