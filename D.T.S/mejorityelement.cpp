#include <iostream>
#include <vector>
using namespace std;


int main( ) {
    vector<int> nums = {1,2,2,1,1};
    int n = nums.size();

    for (int val : nums)
    {
        int freq = 0;
        
        for (int el : nums)
        {
            if (el == val)
            {
                freq++;
            }
        }
        if (freq > n/2)
        {
            return val;
        }
    }

    return 0;
}