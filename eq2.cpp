#include "eq2.h"
#include <cmath>
#include <iostream>
using namespace std;

eq2::eq2(double a, double b, double c) {
	this->a = a;
	this->b = b;
	this->c = c;
	this->D = b * b - 4 * a * c;
}

void eq2::set(double a, double b, double c) {
	this->a = a;
	this->b = b;
	this->c = c;
}

double eq2::find_X() {
	if (D >= 0) {
		return (-b + sqrt(D)) / (2 * a);
	}
	else {
		cout << "Действительных корней нет";
		return 0;
	}
}

double eq2::find_Y(double x) {
	return a * x * x + b * x + c;
}

eq2 eq2::operator+(const eq2 &e) {
	eq2 p = eq2(this->a + e.a, this->b + e.b, this->c + e.c);
	return p;
}

void eq2::operator=(const eq2 &other) {
	this->a = other.a;
	this->b = other.b;
	this->c = other.c;
}