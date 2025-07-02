
#include "multiplierThreeOrFive.h"

namespace challenges{
    int multipliers3or5(int limit)
    {
        int result = 0;

        for(int i = 0; i < limit; i++)
        {
            int remainderOfThree = i % 3;

            int remainderOfFive = i % 5;

            if(remainderOfThree == 0 || remainderOfFive ==0)
            {
                result += i;
            }
        }

        return result;
    }
}