#include <iostream>
#include "func.h"
using namespace std;
int main() {
	int a, b, calctype, func;
	cout << "Insert 2 numbers:" << endl;
	cin >> a >> b;
	cout << calculatortype();
	cin >> calctype;
	switch (calctype) {
	case 1:
		cout << standartlist();
		cin >> func;
		cout << endl << "Result:" << endl;
		cout << standartfunc(a, b, func);
		break;
	case 2:
		cout << "Will be added in the next update";
		break;
	case 3:
		cout << "Will be added in the next update";
		break;
	default:
		std::cout << "Wrong type!!!" << endl;
	}
}
