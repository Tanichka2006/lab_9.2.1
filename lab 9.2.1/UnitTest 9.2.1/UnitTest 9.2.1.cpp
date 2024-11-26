#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 9.2.1/lab 9.2.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest921
{
	TEST_CLASS(UnitTest921)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
                        double x, y, w;


                        x = 3;
                        y = 4;

#if Z >= 1 && Z < 10
                        w = SQR(MAX(x + y, x + Z));
#else
                        w = MIN(SQR(x), 5 * ABS(y - Z));
#endif

                        Assert::AreEqual(64, w, 0.01);
                    }
                };
            }
		}
	};
}
