#pragma once
class rational
{
private:
	int a, b;
public:
	rational();
	rational(int a, int b);
	void set(int a, int b);
	void show();
	rational operator+(const rational& other);
	void operator=(const rational& other);
	friend rational operator-(const rational& first, const rational& second);
	void operator++();
	bool operator==(const rational& other);
	bool operator>(const rational& other);
};



