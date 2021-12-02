#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace unit61rec
{
	TEST_CLASS(unit61rec)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int i = 26;
			int p = i % 13;
			Assert::AreEqual(p, 0);
		}
	};
}