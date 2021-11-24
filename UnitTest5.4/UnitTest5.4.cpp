#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\User\source\repos\pr_5.4\lab_5.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest54
{
	TEST_CLASS(UnitTest54)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t0;
			t0 = S0(1, 15);
			Assert::AreEqual(t0, 1, 15);
		}
	};
}
