#pragma once
#include<cmath>
#include <string>
using namespace std;
string calculatortype();
string standartlist();
string standartfunc(int a, int b, int func);
//standart
int sum(int a, int b);
int sub(int a, int b);
int mult(int a, int b);
int division(int a, int b);
int mode(int a, int b);
int UnaryPlus(int a);
int UnaryMinus(int a);
//programmer
int bitwiseNot(int a);
int bitwiseAnd(int a, int b);
int bitwiseOr(int a, int b);
int bitwiseExclusiveOr(int a, int b);
int leftShift(int a, int b);
int rightShift(int a, int b);
bool negation(bool a);
bool conjunction(bool a, bool b);
bool disjunction(bool a, bool b);
//Scientific
int AbsoluteValue(int a);
double SquareRoot(double a);
double ReciprocalFunction(double a);
