#include <iostream>
#include <string>
#include "standartfunc.h"
#include "programmerfunc.h"
#include "scientificfunc.h"
using namespace std;
std::string calculatortype() {
	std::cout << "Welcome to our calculator!" << std::endl;
	std::cout << std::endl << "Choose calculator type:" << std::endl;
	std::cout << "1.Standart" << std::endl;
	std::cout << "2.Programmer" << std::endl;
	std::cout << "3.Scientific" << std::endl;
	return "\n";
}
std::string standartlist() {
	std::cout << endl << "List of functions:" << std::endl;
	std::cout << "1.sum" << std::endl;
	std::cout << "2.sub" << std::endl;
	std::cout << "3.mult" << std::endl;
	std::cout << "4.division" << std::endl;
	std::cout << "5.mode" << std::endl;
	std::cout << "6.UnaryPlus" << std::endl;
	std::cout << "7.UnaryMinus" << std::endl;
	std::cout << std::endl << "Choose function:";
	return "\n";
}
std::string standartfunc(int func) {
	switch (func) {
	case 1:
		std::cout << std::endl << "Insert 2 numbers:" << std::endl;
		int a, b;
		std::cin >> a >> b;
		std::cout << std::endl << "Result:" << std::endl;
		std::cout << sum(a, b) << std::endl;
		break;
	case 2:
		std::cout << std::endl << "Insert 2 numbers:" << std::endl;
		std::cin >> a >> b;
		std::cout << std::endl << "Result:" << std::endl;
		std::cout << sub(a, b) << std::endl;
		break;
	case 3:
		std::cout << endl << "Insert 2 numbers:" << std::endl;
		std::cin >> a >> b;
		std::cout << std::endl << "Result:" << std::endl;
		std::cout << mult(a, b) << std::endl;
		break;
	case 4:
		std::cout << std::endl << "Insert 2 numbers:" << std::endl;
		std::cin >> a >> b;
		std::cout << std::endl << "Result:" << std::endl;
		std::cout << division(a, b) << std::endl;
		break;
	case 5:
		std::cout << std::endl << "Insert 2 numbers:" << std::endl;
		std::cin >> a >> b;
		std::cout << std::endl << "Result:" << std::endl;
		std::cout << mode(a, b) << std::endl;
		break;
	case 6:
		std::cout << std::endl << "Insert 1 number:" << std::endl;
		std::cin >> a;
		std::cout << std::endl << "Result:" << std::endl;
		std::cout << UnaryPlus(a) << std::endl;
		break;
	case 7:
		std::cout << std::endl << "Insert 1 number:" << std::endl;
		std::cin >> a;
		std::cout << std::endl << "Result:" << std::endl;
		std::cout << UnaryMinus(a) << std::endl;
		break;
	default:
		std::cout << std::endl << "Wrong function!!!" << std::endl;
	}
	return "\n";
}
std::string programmerlist() {
	std::cout << std::endl << "List of functions:" << std::endl;
	std::cout << "1.bitwiseNot" << std::endl;
	std::cout << "2.bitwiseAnd" << std::endl;
	std::cout << "3.bitwiseOr" << std::endl;
	std::cout << "4.bitwiseExclusiveOr" << std::endl;
	std::cout << "5.leftShift" << std::endl;
	std::cout << "6.rightShift" << std::endl;
	std::cout << "7.negation" << std::endl;
	std::cout << "8.conjunction" << std::endl;
	std::cout << "9.disjunction" << std::endl;
	return "\n";
}
string programmerfunc(int func) {
	switch (func) {
	case 1:
		std::cout << std::endl << "Insert 1 number:" << std::endl;
		int a, b;
		std::cin >> a;
		std::cout << std::endl << "Result:" << std::endl;
		std::cout << bitwiseNot(a) << std::endl;
		break;
	case 2:
		std::cout << std::endl << "Insert 2 numbers:" << std::endl;
		std::cin >> a >> b;
		std::cout << std::endl << "Result:" << std::endl;
		std::cout << bitwiseAnd(a, b) << std::endl;
		break;
	case 3:
		std::cout << std::endl << "Insert 2 numbers:" << std::endl;
		std::cin >> a >> b;
		std::cout << std::endl << "Result:" << std::endl;
		std::cout << bitwiseOr(a, b) << std::endl;
		break;
	case 4:
		std::cout << std::endl << "Insert 2 numbers:" << std::endl;
		std::cin >> a >> b;
		std::cout << std::endl << "Result:" << std::endl;
		std::cout << bitwiseExclusiveOr(a, b) << std::endl;
		break;
	case 5:
		std::cout << std::endl << "Insert 2 numbers:" << std::endl;
		std::cin >> a >> b;
		std::cout << std::endl << "Result:" << std::endl;
		std::cout << leftShift(a, b) << std::endl;
		break;
	case 6:
		std::cout << std::endl << "Insert 2 numbers:" << std::endl;
		std::cin >> a >> b;
		std::cout << std::endl << "Result:" << std::endl;
		std::cout << rightShift(a, b) << std::endl;
		break;
	case 7:
		std::cout << std::endl << "Insert 0 or 1:" << std::endl;
		bool f;
		std::cin >> f;
		std::cout << std::endl << "Result :" << std::endl;
		std::cout << Negation(f) << std::endl;
		break;
	case 8:
		std::cout << std::endl << "Insert 0 or 1:" << std::endl;
		bool m;
		std::cin >> f >> m;
		std::cout << std::endl << "Result :" << std::endl;
		std::cout << Conjunction(f, m) << std::endl;
		break;
	case 9:
		std::cout << std::endl << "Insert 0 or 1:" << std::endl;
		std::cin >> f >> m;
		std::cout << std::endl << "Result :" << std::endl;
		std::cout << Disjunction(f, m) << std::endl;
		break;
	default:
		std::cout << std::endl << "Wrong function!!!" << std::endl;
	}
	return "\n";
}
std::string scientificlist() {
	std::cout << std::endl << "List of functions:" << std::endl;
	std::cout << "1.AbsoluteValue" << std::endl;
	std::cout << "2.SquareRoot" << std::endl;
	std::cout << "3.ReciprocalFunction" << std::endl;
	std::cout << "4.Factorial" << std::endl;
	std::cout << "5.Square" << std::endl;
	std::cout << "6.AToThePowerOfB" << std::endl;
	std::cout << "7.TenToThePowerOfB" << std::endl;
	std::cout << "8.NaturalLogarithmOfB" << std::endl;
	std::cout << "9.TimeAndDate" << std::endl;
	std::cout << "10.Sinus" << std::endl;
	std::cout << "11.Cosine" << std::endl;
	std::cout << "12.Tangent" << std::endl;
	std::cout << "13.Cotangent" << std::endl;
	std::cout << "14.Arcsinus" << std::endl;
	std::cout << "15.Arccosine" << std::endl;
	std::cout << "16.Arctangent" << std::endl;
	std::cout << "17.Arccotangent" << std::endl;
	std::cout << "18.ExpToThePowerOf..." << std::endl;
	std::cout << "19.Remainder" << std::endl;
	return "\n";
}
std::string scientificfunc(int func) {
	switch (func) {
	case 1:
		std::cout << std::endl << "Insert 1 number:" << std::endl;
		int a;
		std::cin >> a;
		std::cout << std::endl << "Result:" << std::endl;
		std::cout << AbsoluteValue(a) << std::endl;
		break;
	case 2:
		std::cout << std::endl << "Insert 1 number:" << std::endl;
		double b;
		std::cin >> b;
		std::cout << std::endl << "Result:" << std::endl;
		std::cout << SquareRoot(b) << std::endl;
		break;
	case 3:
		std::cout << std::endl << "Insert 1 number:" << std::endl;
		double b;
		std::cin >> b;
		std::cout << std::endl << "Result:" << std::endl;
		std::cout << ReciprocalFunction(b) << std::endl;
		break;
	case 4:
		std::cout << std::endl << "Insert 1 number:" << std::endl;
		int a;
		std::cin >> a;
		std::cout << std::endl << "Result:" << std::endl;
		std::cout << Factorial(a) << std::endl;
		break;
	case 5:
		std::cout << std::endl << "Insert 1 number:" << std::endl;
		double b;
		std::cin >> b;
		std::cout << std::endl << "Result:" << std::endl;
		std::cout << Square(b) << std::endl;
		break;
	case 6:
		double a;
		int b;
		std::cout << std::endl << "Insert 2 numbers:" << std::endl;
		std::cin >> a >> b;
		std::cout << std::endl << "Result:" << std::endl;
		std::cout << AToThePowerOfB(a,b) << std::endl;
		break;
	case 7:
		std::cout << std::endl << "Insert 1 number:" << std::endl;
		int a;
		std::cin >> a;
		std::cout << std::endl << "Result:" << std::endl;
		std::cout << TenToThePowerOfB(a) << std::endl;
		break;
	case 8:
		std::cout << std::endl << "Insert 1 number:" << std::endl;
		double a;
		std::cin >>a;
		std::cout << std::endl << "Result:" << std::endl;
		std::cout << ln(a) << std::endl;
		break;
	case 9:
		/*не доделан*/
		std::cout << std::endl << "Insert 1 number:" << std::endl;
		int a;
		std::cin >> a;
		std::cout << std::endl << "Result:" << std::endl;
		std::cout << AbsoluteValue(a) << std::endl;
		break;
	case 10:
		std::cout << std::endl << "Insert 1 number:" << std::endl;
		double b;
		std::cin >> b;
		std::cout << std::endl << "Result:" << std::endl;
		std::cout << sinus(b) << std::endl;
		break;
	case 11:
		std::cout << std::endl << "Insert 1 number:" << std::endl;
		double b;
		std::cin >> b;
		std::cout << std::endl << "Result:" << std::endl;
		std::cout << cos(b) << std::endl;
		break;
	case 12:
		std::cout << std::endl << "Insert 1 number:" << std::endl;
		double a;
		std::cin >> a;
		std::cout << std::endl << "Result:" << std::endl;
		std::cout << Tg(a) << std::endl;
		break;
	case 13:
		std::cout << std::endl << "Insert 1 number:" << std::endl;
		double b;
		std::cin >> b;
		std::cout << std::endl << "Result:" << std::endl;
		std::cout << Ctg(b) << std::endl;
		break;
	case 14:
		std::cout << std::endl << "Insert 1 number:" << std::endl;
		double b;
		std::cin >> b;
		std::cout << std::endl << "Result:" << std::endl;
		std::cout << Asin(b) << std::endl;
		break;
	case 15:
		std::cout << std::endl << "Insert 1 number:" << std::endl;
		double a;
		std::cin >> a;
		std::cout << std::endl << "Result:" << std::endl;
		std::cout << Acos(a) << std::endl;
		break;
	case 16:
		std::cout << std::endl << "Insert 1 number:" << std::endl;
		double b;
		std::cin >> b;
		std::cout << std::endl << "Result:" << std::endl;
		std::cout << Atg(b) << std::endl;
		break;
	case 17:
		std::cout << std::endl << "Insert 1 number:" << std::endl;
		double b;
		std::cin >> b;
		std::cout << std::endl << "Result:" << std::endl;
		std::cout << Actg(b) << std::endl;
		break;
	case 18:
		std::cout << std::endl << "Insert 1 number:" << std::endl;
		int a;
		std::cin >> a;
		std::cout << std::endl << "Result:" << std::endl;
		std::cout << expToThePow(a) << std::endl;
		break;
	case 19:
		std::cout << std::endl << "Insert 2 number:" << std::endl;
		int a, b;
		std::cin >> a >> b;
		std::cout << std::endl << "Result:" << std::endl;
		std::cout << mod(a,b) << std::endl;
		break;
	default:
		std::cout << endl << "Wrong function!!!" << std::endl;
	}
	return "\n";
}
std::string calculator() {
	int calctype, func;
	std::cout << calculatortype();
	std::cin >> calctype;
	switch (calctype) {
	case 1:
		std::cout << standartlist();
		std::cin >> func;
		std::cout << standartfunc(func);
		break;
	case 2:
		std::cout << programmerlist();
		std::cin >> func;
		std::cout << programmerfunc(func);
		break;
	case 3:
		std::cout << scientificlist();
	std:cin >> func;
		std::cout << scientificfunc(func);
		break;
	default:
		std::cout << "Wrong type!!!" << std::endl;
	}
	std::cout << "Thanks for using our calculator :)";
	return "\n";
}
