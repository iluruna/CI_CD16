#include "pch.h"
#include "CppUnitTest.h"
#include "..\ci_cd16.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestRectangleArea)
		{
			MathFunctions math;
			double actual = math.RectangleArea(3.0, 4.0);
			double expected = 12.0;
			Assert::AreEqual(expected, actual);
		}

	};
}
