#include <iostream>
#include "func.h"
int main() {
	int a, b,func;
	std::cout << "Insert 2 numbers:" << endl;
	std::cin >> a >> b;
	std::cout << "List of functions:" << endl;
	std::cout << "1.sum" << endl;
	std::cout << "2.sub" << endl;
	std::cout << "3.mult" << endl;
	std::cout << "4.division";
	std::cout << "5.mode";
	std::cout << "6.UnaryPlus";
	std::cout << "7.UnaryMinus";
	std::cout << "Choose function:" << endl;
	std::cin >> func;
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
}
