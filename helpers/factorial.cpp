#include "factorial.h"

namespace helpers
{
    int factorial(int number)
    {
        int factorial = 1;

        for (int i = 1; i <= number; i++)
        {
            factorial *= i;
        }

        return factorial;
    }
}
