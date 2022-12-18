#include <iostream>
#include <string>
#include "standartfunc.h"
#include "programmerfunc.h"
#include "scientificfunc.h"
using namespace std;
string calculatortype() {
	cout << "Welcome to our calculator!" << endl;
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
string standartfunc(int func) {
	switch (func) {
	case 1:
		cout << endl << "Insert 2 numbers:" << endl;
		int a, b;
		cin >> a >> b;
		cout << endl << "Result:" << endl;
		std::cout << sum(a, b) << endl;
		break;
	case 2:
		cout << endl << "Insert 2 numbers:" << endl;
		cin >> a >> b;
		cout << endl << "Result:" << endl;
		std::cout << sub(a, b) << endl;
		break;
	case 3:
		cout << endl << "Insert 2 numbers:" << endl;
		cin >> a >> b;
		cout << endl << "Result:" << endl;
		std::cout << mult(a, b) << endl;
		break;
	case 4:
		cout << endl << "Insert 2 numbers:" << endl;
		cin >> a >> b;
		cout << endl << "Result:" << endl;
		std::cout << division(a, b) << endl;
		break;
	case 5:
		cout << endl << "Insert 2 numbers:" << endl;
		cin >> a >> b;
		cout << endl << "Result:" << endl;
		std::cout << mode(a, b) << endl;
		break;
	case 6:
		cout << endl << "Insert 1 number:" << endl;
		cin >> a;
		cout << endl << "Result:" << endl;
		std::cout << UnaryPlus(a) << endl;
		break;
	case 7:
		cout << endl << "Insert 1 numbers:" << endl;
		cin >> a;
		cout << endl << "Result:" << endl;
		std::cout << UnaryMinus(a) << endl;
		break;
	default:
		std::cout << endl << "Wrong function!!!" << endl;
	}
	return "\n";
}
string programmerlist() {
	cout << endl << "List of functions:" << endl;
	cout << "1.bitwiseNot" << endl;
	cout << "2.bitwiseAnd" << endl;
	cout << "3.bitwiseOr" << endl;
	cout << "4.bitwiseExclusiveOr" << endl;
	cout << "5.leftShift" << endl;
	cout << "6.rightShift" << endl;
	cout << "7.negation(in development)" << endl;
	cout << "8.conjunction(in development)" << endl;
	cout << "9.disjunction(in development)" << endl;
	return "\n";
}
string programmerfunc(int func) {
	switch (func) {
	case 1:
		cout << endl << "Insert 1 number:" << endl;
		int a, b;
		cin >> a;
		cout << endl << "Result:" << endl;
		cout << bitwiseNot(a) << endl;
		break;
	case 2:
		cout << endl << "Insert 2 numbers:" << endl;
		cin >> a >> b;
		cout << endl << "Result:" << endl;
		cout << bitwiseAnd(a, b) << endl;
		break;
	case 3:
		cout << endl << "Insert 2 numbers:" << endl;
		cin >> a >> b;
		cout << endl << "Result:" << endl;
		cout << bitwiseOr(a, b) << endl;
		break;
	case 4:
		cout << endl << "Insert 2 numbers:" << endl;
		cin >> a >> b;
		cout << endl << "Result:" << endl;
		cout << bitwiseExclusiveOr(a, b) << endl;
		break;
	case 5:
		cout << endl << "Insert 2 numbers:" << endl;
		cin >> a >> b;
		cout << endl << "Result:" << endl;
		cout << leftShift(a, b) << endl;
		break;
	case 6:
		cout << endl << "Insert 2 numbers:" << endl;
		cin >> a >> b;
		cout << endl << "Result:" << endl;
		cout << rightShift(a, b) << endl;
		break;
	default:
		std::cout << endl << "Wrong function!!!" << endl;
	}
	return "\n";
}
string scientificlist() {
	cout << endl << "List of functions:" << endl;
	cout << "1.AbsoluteValue" << endl;
	cout << "2.SquareRoot" << endl;
	cout << "3.ReciprocalFunction" << endl;
	return "\n";
}
string scientificfunc(int func) {
	switch (func) {
	case 1:
		cout << endl << "Insert 1 number:" << endl;
		int a;
		cin >> a;
		cout << endl << "Result:" << endl;
		cout << AbsoluteValue(a) << endl;
		break;
	case 2:
		cout << endl << "Insert 1 number:" << endl;
		double b;
		cin >> b;
		cout << endl << "Result:" << endl;
		cout << SquareRoot(b) << endl;
		break;
	case 3:
		cout << endl << "Insert 1 number:" << endl;
		cin >> b;
		cout << endl << "Result:" << endl;
		cout << ReciprocalFunction(b) << endl;
		break;
	default:
		std::cout << endl << "Wrong function!!!" << endl;
	}
	return "\n";
}
string calculator() {
	int calctype, func;
	cout << calculatortype();
	cin >> calctype;
	switch (calctype) {
	case 1:
		cout << standartlist();
		cin >> func;
		cout << standartfunc(func);
		break;
	case 2:
		cout << programmerlist();
		cin >> func;
		cout << programmerfunc(func);
		break;
	case 3:
		cout << scientificlist();
		cin >> func;
		cout << scientificfunc(func);
		break;
	default:
		std::cout << "Wrong type!!!" << endl;
	}
	cout << "Thanks for using our calculator :)";
	return "\n";
}
