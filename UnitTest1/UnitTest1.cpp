#include "pch.h"
#include "CppUnitTest.h"
#include "../Laba 6.4(1)/Laba 6.4(1).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int const size = 25;
			int a[size];
			int i = 0;
			Create(a, size);
			Print(a, size);
			Min(a, size);
				Sum(a, size);
				foo(size, a);
		}
	};
}
