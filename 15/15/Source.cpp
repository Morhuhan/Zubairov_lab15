#include <stdio.h>
#include <math.h>
#include <corecrt_math_defines.h>

double surface_area(double a) {
	double surface = 0;
	surface = (a * a) * 6;
	return surface;
}

double surface_area(double r, double h) {
	double surface = 0;
	surface = (2 * M_PI * r * h) + (2 * M_PI * r * r);
	return surface;
}

double surface_area(double r_1, double r_2, double gen) {
	double surface = 0;
	surface = M_PI * (gen * r_2 + gen * r_1 +  r_2 * r_2 + r_1 * r_1);
	return surface;
}



int main() {

	char key = 0;
	double a = 0;
	double r = 0;
	double h = 0;
	double r_1 = 0;
	double r_2 = 0;
	double gen = 0;

	printf("Enter the kind of object!\n1 - cube\n2 - cylinder\n3 - truncated cone\n");
	scanf_s(" %c", &key, 1);

	switch (key) {

	case '1':
		printf("Enter the length of face\n");
		scanf_s("%lf", &a);
		printf("Surface area is: %lf\n", surface_area(a));
		break;

	case '2':

		printf("Enter the base radius\n");
		scanf_s("%lf", &r);

		printf("Enter the height\n");
		scanf_s("%lf", &h);

		printf("Surface area is: %lf\n", surface_area(r, h));
		break;

	case '3':
		printf("Enter the radius of the upper base\n");
		scanf_s("%lf", &r_1);

		printf("Enter the radius of the lower base\n");
		scanf_s("%lf", &r_2);

		printf("Enter the length of the generatrix\n");
		scanf_s("%lf", &gen);

		printf("Surface area is: %lf\n", surface_area(r_1, r_2, gen));
		break;

	default:
		break;
	}

}