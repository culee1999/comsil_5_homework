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

int main(void) {
	int A = 10, B = 5;
	printf("%d\n", add(A, B));
	printf("%d\n", minus(A, B));
	printf("%d\n", multiply(A, B));

	return 0;
}