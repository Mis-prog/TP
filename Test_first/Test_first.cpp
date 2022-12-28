#include "pch.h"
#include "CppUnitTest.h"
#include "../TP_test_first/roots.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Testfirst
{
	TEST_CLASS(Testfirst)
	{
	public:
		
		TEST_METHOD(Test1)
		{
			vector<double> arr = roots_eq(1, 2, 1);
			vector<double> result = { 1,-1 };
			Assert::IsTrue(arr == result,L"Вывод одного корня");
		}
		TEST_METHOD(Test2)
		{
			vector<double> arr = roots_eq(1, -5, 9);
			vector<double> result = {0};
			Assert::IsTrue(arr == result,L"Не имеет корней");
		}
		TEST_METHOD(Test3)
		{
			vector<double> arr = roots_eq(1, 3, -4);
			vector<double> result = { 2,1,-4  };
			Assert::IsTrue(arr == result, L"Вывод 2х корней в порядке возрастания");
		}
		TEST_METHOD(Test4)
		{
			vector<double> arr = roots_eq(0,0,0);
			vector<double> result = { 3};
			Assert::IsTrue(arr == result, L"Бесконечное количество ");
		}
		TEST_METHOD(quad_one_root_zero)
		{
			double A = 1., B = 0., C = 0.;
			std::vector <double> expected = { 1, 0 },
				result = roots_eq(A, B, C);
			Assert::AreEqual(expected.size(), result.size(),
				L"size res(1,0,0) (1, 0)");

			Assert::AreEqual(expected.at(0), result.at(0),
				(L"res(1,0,0) = (1, 0) roots_count"));

			for (int i = 1; i < expected.size(); i++)
				Assert::AreEqual(expected.at(i), result.at(i),
					(L"res(1,0,0) = (1, 0), root " + std::to_wstring(i)).c_str());

		}

		TEST_METHOD(all_zero)
		{
			double A = 0., B = 0., C = 0.;
			std::vector <double> expected = { 3 },
				result = roots_eq(A, B, C);

			Assert::AreEqual(expected.size(), result.size(),
				L"size res(1,0,0) (1, 0)");

			Assert::AreEqual(expected.at(0), result.at(0),
				(L"res(1,0,0) = (1, 0) roots_count"));

			for (int i = 1; i < expected.size(); i++)
				Assert::AreEqual(expected.at(i), result.at(i),
					(L"res(1,0,0) = (1, 0), root " + std::to_wstring(i)).c_str());

		}
	};
}
