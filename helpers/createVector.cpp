#include <vector>
#include <numeric>
#include "createVector.h"

using namespace std;

namespace helpers
{
    vector<int> createVector(int n)
    {
        vector<int> vec(n);

        iota (begin(vec), end(vec),0);

        return vec;
    }

}
