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
double Square(double a) {
	return a * a;
}
double AToThePowerOfB(double a, int m) {
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
double TenToThePowerOfB(int b) {
	if (b == 0) {
		return 1;
	}
	if (b == 1) {
		return 10;
	}
	else {
		int z=10;
		for (int i = 1; i < b; i++) {
			z = z * z;
		}
		return z;
	}
}
double ln(double f) {
	return log(f);
}
double sinus(double a) {
	return sin(a);
}
double Tg(double a) {
	return tan(a);
}
double Ctg(double a) {
	return ReciprocalFunction(tan(a));
}
double Asin(double a) {
	return asin(a);
}
double Acos(double a) {
	return acos(a);
}
double Atg(double a) {
	return atan(a);
}
double Actg(double a) {
	return ReciprocalFunction(atan(a));
}
double expToThePow(int a) {
	return exp(a);
}
double mod(int a, int b) {
	return a % b;
}
/*int time(0)*/
