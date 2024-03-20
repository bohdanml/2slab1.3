#include "pch.h"
#include "CppUnitTest.h"
#include "..//2slab1.3/Rational.h"
#include "..//2slab1.3/Rational.cpp"
#include "..//2slab1.3/main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
	
			TEST_METHOD(InitializationMethods)
			{
				Rational r;
				r.Init(7, 8);
				Assert::AreEqual(7, r.getNumerator());
				Assert::AreEqual(8, r.getDenominator());
			}
		
	};
}
