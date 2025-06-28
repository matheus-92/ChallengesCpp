#include "../helpers/factorial.h"
#include "../helpers/createVector.h"
#include <vector>
#include <string>

#include "lexicographicPermutations.h"

using namespace helpers;

namespace challenges
{
    std::string permutations(int position)
    {
        int target = position -1;

        std::vector<int> digits = helpers::createVector(10);
        std::string phrase ="";

        for(int i=9; i >=0; i--)
        {
            int factorial = helpers::factorial(i);
        
            int index = target / factorial;
        
            target = target % factorial;
        
            phrase += std::to_string(digits[index]);
        
            digits.erase(digits.begin() + index);
        }

        return phrase;
    }
}