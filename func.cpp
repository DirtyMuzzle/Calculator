#include <cmath>
#include <iostream>
#include <string>
#include "standartfunc.h"
using namespace std;
string calculatortype() {
	cout << endl << "Choose calculator type:" << endl;
	cout << "1.Standart" << endl;
	cout << "2.Programmer" << endl;
	cout << "3.Scientific" << endl;
	return "\n";
}
string standartlist() {
	std::cout << endl << "List of functions:" << endl;
	std::cout << "1.sum" << endl;
	std::cout << "2.sub" << endl;
	std::cout << "3.mult" << endl;
	std::cout << "4.division" << endl;
	std::cout << "5.mode" << endl;
	std::cout << "6.UnaryPlus" << endl;
	std::cout << "7.UnaryMinus" << endl;
	std::cout << endl << "Choose function:";
	return "\n";
}
string standartfunc(int a, int b, int func) {
	switch (func) {
	case 1:
		std::cout << sum(a, b) << endl;
		break;
	case 2:
		std::cout << sub(a, b) << endl;
		break;
	case 3:
		std::cout << mult(a, b) << endl;
		break;
	case 4:
		std::cout << division(a, b) << endl;
		break;
	case 5:
		std::cout << mode(a, b) << endl;
		break;
	case 6:
		std::cout << UnaryPlus(a) << endl;
		break;
	case 7:
		std::cout << UnaryMinus(a) << endl;
		break;
	default:
		std::cout << "Wrong function!!!" << endl;
	}
	return "\nThanks for using our calculator :)\n";
}
//programmer

int bitwiseNot(int a){
	return ~a;
}
int bitwiseAnd(int a, int b) {
	return a & b;
}
int bitwiseOr(int a, int b) {
	return a | b;
}
int bitwiseExclusiveOr(int a, int b) {
	return a ^ b;
}
int leftShift(int a, int b) {
	return a << b;
}
int rightShift(int a, int b) {
	return a >> b;
}
bool negation(bool a) {
	return !a;
}
bool conjunction(bool a, bool b) {
	return a && b;
}
bool disjunction(bool a, bool b) {
	return a || b;
}
//Scientific
int AbsoluteValue(int a) {
	return abs(a);
}
double SquareRoot(double a) {
	return sqrt(a);
}
double ReciprocalFunction(double a) {
	return 1 / a;
}
