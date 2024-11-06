#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 9.2.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			// Тест 1: z = 1, x = 4, y = 2 -> w = max((4 - 2)^2, |2 - 4|) = max(4, 2) = 4
			Assert::AreEqual(4.0, CalculateW(4, 2, 1), 0.001);

		}
	};
}
