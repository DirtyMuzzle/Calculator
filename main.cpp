#include <iostream>
#include "func.h"
int main() {
	int a, b,func;
	std::cout << "Insert 2 numbers:" << std::endl;
	std::cin >> a >> b;
	std::cout << "List of functions:" << std::endl;
	std::cout << "1.sum" << std::endl;
	std::cout << "2.sub" << std::endl;
	std::cout << "3.mult" << std::endl;
	std::cout << "4.division" << std::endl;
	std::cout << "5.mode" << std::endl;
	std::cout << "6.UnaryPlus" << std::endl;
	std::cout << "7.UnaryMinus" << std::endl;
	std::cout << "Choose function:" << std::endl;
	std::cin >> func;
	std::cout << "Result:" << std::endl;
	switch (func) {
	case 1:
		std::cout << sum(a, b) << std::endl;
		break;
	case 2:
		std::cout << sub(a, b) << std::endl;
		break;
	case 3:
		std::cout << mult(a, b) << std::endl;
		break;
	case 4:
		std::cout << division(a, b) << std::endl;
		break;
	case 5:
	        std::cout << mode(a, b) << std::endl;
		break;
	case 6:
		std::cout << UnaryPlus(a) << std::endl;
		break;
	case 7:
		std::cout << UnaryMinus(a) << std::endl;
		break;
	default:
		std::cout << "Wrong function!!!" << std::endl;
	}
}
