//////////////////////////////////////////////////////////////////////////////
// Source.cpp
// головний файл проекту – функція main
#pragma pack(1)
#include <iostream>
#include "IntRange.h"

using namespace std;

int main() 
{
    IntRange x(3, 5);

    cout << "IntRange object: " << endl;
    cout << "x: " << x << endl;

    cout << "Setting first to 7..." << endl;
    x.SetFirst(7);
    cout << "x: " << x << endl;

    cout << "Setting second to 10..." << endl;
    x.SetSecond(10);
    cout << "x: " << x << endl;

    cout << "GetFirst: " << x.GetFirst() << endl;
    cout << "GetSecond: " << x.GetSecond() << endl;

    cout << "Prefix increment: " << ++x << endl;
    cout << "Postfix increment: " << x++ << endl;
    cout << "After postfix increment: " << x << endl;

    cout << "Prefix decrement: " << --x << endl;
    cout << "Postfix decrement: " << x-- << endl;
    cout << "After postfix decrement: " << x << endl;

    cout << "IntRange with #pragma pack(1): " << sizeof(IntRange) << " bytes" << endl;

    cout << "IntRange without #pragma pack(1): " << sizeof(IntRange) << " bytes" << endl;

    return 0;
}
