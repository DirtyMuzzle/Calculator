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
	default:
		cout << "Wrong function!!!" << endl;
	}
}
