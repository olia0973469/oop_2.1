#include "pch.h"
#include "CppUnitTest.h"
#include "../oop_2.1/IntRange.h"
#include "../oop_2.1/IntRange.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			IntRange x(3, 5);
			Assert::AreEqual(3.0, x.GetFirst());
			Assert::AreEqual(5.0, x.GetSecond());

		}
	};
}
