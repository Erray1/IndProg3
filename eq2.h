#pragma once
class eq2
{
private:
	double a, b, c;
	double D;
public:
	eq2(double a, double b, double c);
	void set(double a, double b, double c);
	double find_X();
	double find_Y(double x);
	eq2 operator+(const eq2 &other);
	void operator=(const eq2& other);
};

