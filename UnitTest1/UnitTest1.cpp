#include "pch.h"
#include "CppUnitTest.h"
#include "../9.1 EШ/var.h"
#include "../9.1 EШ/sum.h"
#include "../9.1 EШ/var.cpp"
#include "../9.1 EШ/sum.cpp"
#include "../9.1 EШ/dod.h"
#include "../9.1 EШ/dod.cpp"

using namespace nsVar;
using namespace nsSum;

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestTaylorSeriesSum)
        {
            x = 0.5;   
            e = 1e-6;  
            double expected = log(1 - x); 

            sum();

            Assert::AreEqual(-expected, s, 1e-6, L"Обчислене значення не відповідає очікуваному");
        }
    };
}