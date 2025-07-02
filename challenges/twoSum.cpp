#include <vector>
#include <unordered_map>
#include "twoSum.h"

using namespace std;

namespace challenges
{
    std::vector<int> twoSum(std::vector<int>& nums, int target) 
    {
        std::unordered_map<int,int> map;
        std::vector<int> indexes;

        int size = nums.size();

        for(int t =0; t<size; t++)
        {
            int complement = target - nums[t];

            if(map.find(complement) != map.end())
            {
                indexes.push_back(map[complement]);
                indexes.push_back(t);

                break;
            }

            map[nums[t]] = t;
        }   

        return indexes;
    }
}

