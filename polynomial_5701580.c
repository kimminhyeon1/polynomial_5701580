#include <stdio.h>
#define MAX_DEGREE 101

typedef struct {
	int degree;
	float coef[MAX_DEGREE];
}polynomial;

polynomial poly_mult(polynomial A, polynomial B) {
	polynomial C;

}
void print_poly(polynomial p) {
	for (int i = p.degree; i > 0; i--)
		printf("%3.1fx^%d + ", p.coef[p.degree - i], i);
	printf("%3.1f\n", p.coef[p.degree]);
}

int main(void) {
	polynomial a = { 3, { 4, 3, 2, 1 } };
	polynomial b = { 2, { 3 ,2 ,8 } };
	polynomial c;

	print_poly(a);
	print_poly(b);

	c = poly_mult(a, b); // 다항식 곱셈 수행
	printf("---------------------------------------------\n");
	print_poly(c); // 결과 출력

	return 0;
}