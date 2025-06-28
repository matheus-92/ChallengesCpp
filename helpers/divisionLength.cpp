#include <iostream>
#include <map>
#include "divisionLength.h"

namespace helpers
{
    int divisionLenght(int d)
    {
        std::map<int, int> seen;
        int value = 1;
        int position = 0;

        while(value !=0)
        {
            if(seen.count(value))
            {
                return position - seen[value]; 
            }

            seen[value] = position;

            value = (value *10) % d;
            
            position++;

        }

        return 0;
    }

}
