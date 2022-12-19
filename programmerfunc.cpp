int bitwiseNot(int a) {
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
	if (a == true) {
		return false;
	}
	else {
		return true;
	}
	}
bool conjunction(bool a, bool b) {
	if (a == true && b == true) {
		return true;
	}
	else {
		return false;
	}
	
}
bool disjunction(bool a, bool b) {
	if (a == true || b == true) {
		return true;
	}
	else {
		return false;
	}
}
