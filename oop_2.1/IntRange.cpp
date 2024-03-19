//////////////////////////////////////////////////////////////////////////////
// IntRange.cpp
// ���� ��������� � ��������� ������ �����

#include "IntRange.h"
#include <sstream>

IntRange::IntRange() //������ ��� ���������
{
	first = 0;
	second = 0;
}

IntRange::IntRange(double r = 0, double i = 0)  //�����������
{
	first = r;
	second = i;
}

IntRange::IntRange(const IntRange& r)  //���������
{
	first = r.first;
	second = r.second;
}

IntRange::~IntRange()  //����������
{ }

void IntRange::SetFirst(double r)
{
	first = r;
}

void IntRange::SetSecond(double i)
{
	second = i;
}

double IntRange::GetFirst() const
{
	return first;
}

double IntRange::GetSecond() const
{
	return second;
}

IntRange& IntRange::operator = (const IntRange& r) //���������
{
	first = r.first;
	second = r.second;
	return *this;
}

IntRange::operator string () const  //�������� � ��������
{
	stringstream ss;
	ss << " First = " << first << endl;
	ss << " Second = " << second << endl;
	return ss.str();
}

ostream & operator << (ostream & out, const IntRange& r)  //������������ � � �
{
	out << string(r);
	return out;
}

istream& operator >> (istream& in, IntRange& r)  //��������� �� �����
{
	cout << " First = "; in >> r.first;
	cout << " Second = "; in >> r.second;
	cout << endl;
	return in;
}

IntRange& IntRange::operator ++()
{
	first++;
	return *this;
}

IntRange& IntRange::operator --()
{
	first--;
	return *this;
}

IntRange IntRange::operator ++(int)
{
	IntRange t(*this);
	second++;
	return t;
}

IntRange IntRange::operator --(int)
{
	IntRange t(*this);
	second--;
	return t;
}
