#include <cmath>
using namespace std;
int AbsoluteValue(int a) {
	if (a >= 0) {
		return a;
	}
	else {
		return -a;
	}
}
double SquareRoot(double a) {
	return sqrt(a);
}
double ReciprocalFunction(double a) {
	return 1 / a;
}
int factorial(int a) {
	if (a < 0) {
		return 0;
	}
	if (a == 0) {
		return 1;
	}
	else {
		return a * factorial(a - 1);
	}
}
double square(double a) {
	return a * a;
}
double degree(double a,int m) {
	if (m == 0) {
		return 0;
	}
	if (m == 1) {
		return a;
	}
	else {
		for (int i = 1; i < m; i++) {
			a = a * a;
		}
		return a;
	}
}
