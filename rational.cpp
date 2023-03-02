#include "rational.h"
#include <iostream>
using namespace std;

// Вспомогательные операции

int rational::nod(int a, int b) {
	while (a > 0 && b > 0)
		if (a > b)
			a %= b;
		else
			b %= a;
	return a + b;
}

int rational::nok(int a, int b) {
	return (a * b) / nod(a, b);
}

// Методы

rational::rational(int a, int b) {

	int n = nod(a, b);

	if (b == 0) {
		cout << "Попытка деления на ноль\n";
		this->a = 0;
		this->b = 0;
		return;
	}

	if (a > b) {
		a = a - (a / b) * b;
		if (n != 1 && a != 0) {
			a = a / n;
			b = b / n;
		}
		this->a = a;
		this->b = b;
	}
	else if (a == b) {
		this->a = 1;
		this->b = 1;
	}
	else if (a < b) {
		if (n != 1) {
			a = a / n;
			b = b / n;
		}
		this->a = a;
		this->b = b;
	}
}

rational::rational() {
	this->a = 1;
	this->b = 1;
};

void rational::set(int a, int b) {
	int n = nod(a, b);

	if (b == 0) {
		cout << "Попытка деления на ноль\n";
		this->a = 0;
		this->b = 0;
		return;
	}

	if (a > b) {
		a = a - (a / b) * b;
		if (n != 1 && a != 0) {
			a = a / n;
			b = b / n;
		}
		this->a = a;
		this->b = b;
	}
	else if (a == b) {
		this->a = 1;
		this->b = 1;
	}
	else if (a < b) {
		if (n != 1) {
			a = a / n;
			b = b / n;
		}
		this->a = a;
		this->b = b;
	}
}

void rational::show() {
	cout << a << "/" << b << "\n";
}

// Операторы

void rational::operator=(const rational& other) {
	this->a = other.a;
	this->b = other.b;
}

rational rational::operator+(const rational& other) {
	int new_b = nok(this->b, other.b);
	int new_a = (new_b / this->b) * this->a + (new_b / other.b) * other.a;
	rational p = rational(new_a, new_b);
	return p;
}

rational operator-(const rational& first, const rational& second)
{
	int a = first.a;
	int b = second.a;
	int nod_chisl;
	while (a > 0 && b > 0) {
		if (a > b)
			a %= b;
		else
			b %= a;
	}
	nod_chisl = a + b;
	int nok_znam = (first.a * first.b) / nod_chisl;
		
	

	int new_b = nok_znam;
	int new_a = abs((new_b / first.b) * first.a - (new_b / second.b) * second.a);
	rational p = rational(new_a, new_b);
	return p;
}

void rational::operator++() {
	this->set(this->a + 1, this->b);
}

bool rational::operator==(const rational& other) {
	if (this->a == other.a && this->b == other.b) return true;
	else return false;
}

bool rational::operator>(const rational& other) {
	int new_b = nok(this->b, other.b);
	if ((new_b / this->b) * this->a > (new_b / other.b) * other.a) return true;
	else return false;
}
