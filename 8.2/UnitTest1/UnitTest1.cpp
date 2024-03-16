#include "pch.h"
#include "CppUnitTest.h"
#include "../8.2/Source.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			std::string input = "abc 1234 defg 567890 hi";

			size_t result = MinLength(input);

			Assert::AreEqual(size_t(4), result);
		}

		TEST_METHOD(TestMethod2)
		{
			std::string input = "a 1 b 23 c 456 d 7890 e";

			size_t result = MinLength(input);

			Assert::AreEqual(size_t(1), result);
		}

		TEST_METHOD(TestMethod3)
		{
			std::string input = "abcdefg";

			size_t result = MinLength(input);

			Assert::AreEqual(size_t(0), result);
		}

		TEST_METHOD(TestMethod4)
		{
			std::string input = "";

			size_t result = MinLength(input);

			Assert::AreEqual(size_t(0), result);
		}
	};
}
