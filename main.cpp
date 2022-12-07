#include <iostream>
#include "func.h"
using namespace std;
int main() {
	int a, b,func;
	cout << "Insert 2 numbers:" << endl;
	cin >> a >> b;
	cout << "List of functions:" << endl;
	cout << "1.sum" << endl;
	cout << "2.sub" << endl;
	cout << "3.mult" << endl;
	std::cout << "4.division";
	std::cout << "5.mode";
	std::cout << "6.UnaryPlus";
	std::cout << "7.UnaryMinus";
	cout << "Choose function:" << endl;
	cin >> func;
	switch (func) {
	case 1:
		cout << sum(a, b) << endl;
		break;
	case 2:
		cout << sub(a, b) << endl;
	case 3:
		cout << mult(a, b) << endl;
			case 4:
		std::cout << division(a, b);
		break;
	case 5:
	    std::cout << mode(a, b);
		break;
	case 6:
		std::cout << UnaryPlus(a);
		break;
	case 7:
		std::cout << UnaryMinus(a);
		break;
	default:
		cout << "Wrong function!!!" << endl;
	}
}
