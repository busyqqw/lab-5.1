#include "pch.h"
#include "CppUnitTest.h"
#include "../laba 5.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
		
			double c;
			c = h(1, 2);
			Assert::AreEqual(c, 1.4, 0.0001);
			
		}
	};
}
