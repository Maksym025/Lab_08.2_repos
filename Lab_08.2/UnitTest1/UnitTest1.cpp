#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_08.2/Lab_08.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const string s = "adfs sfsf s f    sfsfs aaa";
			int count = CountAInLastWord(s);
			Assert::AreEqual(count, 3);
		}
	};
}
