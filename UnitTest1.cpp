#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab6.3r/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			const int n = 4;
			int i = 2;
			int S = 3;
			int r[n] = { 20,1,-5,6 };
			t = Sum(r, n, i, S);
			Assert::AreEqual(t, 9);

		}
	};
}
