#include "../helpers/divisionLength.h"
#include <string>
#include "reciprocalCycles.h"

using namespace helpers;

namespace challenges
{
    std::string reciprocalCycles()
    {
        int maxLenght = 0;
        int cycle = 0;

        for(int i=2; i <1000; i++)
        {
            int result = helpers::divisionLenght(i);

            if(maxLenght < result)
            {
                maxLenght = result;

                cycle = i;
            }
        }
        std::string phrase = "This is the lenght: " + std::to_string(maxLenght) + " and number: " + std::to_string(cycle);
        
        return phrase; 
    }
}
