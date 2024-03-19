//////////////////////////////////////////////////////////////////////////////
// IntRange.h
// заголовний файл Ц визначенн€ класу

#pragma once
#include <iostream>
#include <string>

using namespace std;

class IntRange
{
	double first, second;
public:
	IntRange();
	IntRange(double, double);
	IntRange(const IntRange&);
	~IntRange();
	void SetFirst(double);
	void SetSecond(double);
	double GetFirst() const;
	double GetSecond() const;
	IntRange& operator = (const IntRange&);
	operator string() const;
	friend IntRange operator + (const IntRange&, const IntRange&);
	friend IntRange operator - (const IntRange&, const IntRange&);
	friend IntRange operator * (const IntRange&, const IntRange&);
	friend IntRange operator / (const IntRange&, const IntRange&);
	friend IntRange operator ^ (const IntRange&, const unsigned);
	friend ostream& operator << (ostream&, const IntRange&);
	friend istream& operator >> (istream&, IntRange&);
	IntRange& operator ++();
	IntRange& operator --();
	IntRange operator ++(int);
	IntRange operator --(int);
}; 
